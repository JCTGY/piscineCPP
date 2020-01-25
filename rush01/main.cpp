/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:43:19 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/24 16:16:12 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* ----------------------------------------------------------------------------------------- */
// Time module
#include <ctime>
tm *getCurrentTime(void) {
	time_t now = time(0);
	tm *currentTime = localtime(&now);
	return currentTime;
}

/* ----------------------------------------------------------------------------------------- */
// OS module
#include <sys/utsname.h>
utsname getOsModule(void) {
	struct utsname unameData;
	uname(&unameData);
	return unameData;
}

/* ----------------------------------------------------------------------------------------- */
// Name
#include <unistd.h>
std::string getHostName(void) {

	char name[256];
	if (gethostname(name, sizeof(name)) == -1)
		return NULL;
	return name;
}

std::string getUserName(void) {

	std::string name;
	name = getlogin();
	return name;
}

/* ----------------------------------------------------------------------------------------- */
// CPU Load
#include <mach/mach_init.h>
#include <mach/mach_error.h>
#include <mach/mach_host.h>
#include <mach/vm_map.h>
static unsigned long long _previousTotalTicks = 0;
static unsigned long long _previousIdleTicks = 0;

float CalculateCPULoad(unsigned long long idleTicks, unsigned long long totalTicks)
{
  unsigned long long totalTicksSinceLastTime = totalTicks-_previousTotalTicks;
  unsigned long long idleTicksSinceLastTime  = idleTicks-_previousIdleTicks;
  float ret = 1.0f-((totalTicksSinceLastTime > 0) ? ((float)idleTicksSinceLastTime)/totalTicksSinceLastTime : 0);
  _previousTotalTicks = totalTicks;
  _previousIdleTicks  = idleTicks;
  return ret;
}

// Returns 1.0f for "CPU fully pinned", 0.0f for "CPU idle", or somewhere in between
// You'll need to call this at regular intervals, since it measures the load between
// the previous call and the current one.
float GetCPULoad()
{
   host_cpu_load_info_data_t cpuinfo;
   mach_msg_type_number_t count = HOST_CPU_LOAD_INFO_COUNT;
   if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO, (host_info_t)&cpuinfo, &count) == KERN_SUCCESS)
   {
      unsigned long long totalTicks = 0;
      for(int i=0; i<CPU_STATE_MAX; i++) totalTicks += cpuinfo.cpu_ticks[i];
      return CalculateCPULoad(cpuinfo.cpu_ticks[CPU_STATE_IDLE], totalTicks);
   }
   else return -1.0f;
}

/* ------------------------------------------------------------------------------------------- */
// Memery Module
static double ParseMemValue(const char * b)
{
   while((*b)&&(isdigit(*b) == false)) b++;
   return isdigit(*b) ? atof(b) : -1.0;
}

// Returns a number between 0.0f and 1.0f, with 0.0f meaning all RAM is available, and 1.0f meaning all RAM is currently in use
float GetSystemMemoryUsagePercentage()
{
   FILE * fpIn = popen("/usr/bin/vm_stat", "r");
   if (fpIn)
   {
      double pagesUsed = 0.0, totalPages = 0.0;
      char buf[512];
      while(fgets(buf, sizeof(buf), fpIn) != NULL)
      {
         if (strncmp(buf, "Pages", 5) == 0)
         {
            double val = ParseMemValue(buf);
            if (val >= 0.0)
            {
               if ((strncmp(buf, "Pages wired", 11) == 0)||(strncmp(buf, "Pages active", 12) == 0)) pagesUsed += val;
               totalPages += val;
            }
         }
         else if (strncmp(buf, "Mach Virtual Memory Statistics", 30) != 0) break;  // Stop at "Translation Faults", we don't care about anything at or below that
      }
      pclose(fpIn);

      if (totalPages > 0.0) return (float) (pagesUsed/totalPages);
   }
   return -1.0f;  // indicate failure
}

int main(void)
{
	float memUsage = GetSystemMemoryUsagePercentage();
	std::cout << "Memory usage: " << memUsage << std::endl;

	float CPULoad = GetCPULoad();
	std::cout << "CPU load: " << CPULoad<< std::endl;

	std::string hostName = getHostName();
	std::cout << "Hostname: " << hostName << std::endl;

	std::string userName = getUserName();
	std::cout << "userName: " << userName << std::endl;

	/*
	* char  sysname[]  name of this implementation of the operating system
	* char  nodename[] name of this node within an implementation-dependent communications network
	* char  release[]  current release level of this implementation
	* char  version[]  current version level of this release
	* char  machine[]  name of the hardware type on which the system is running
	*/
	utsname os = getOsModule();
	std::cout << "sysname: " << os.sysname << std::endl;
	std::cout << "nodename: " << os.nodename << std::endl;
	std::cout << "release: " << os.release << std::endl;
	std::cout << "version: " << os.version << std::endl;
	std::cout << "machine: " << os.machine << std::endl;
	
	tm *time = getCurrentTime();
	std::cout << "Year: " << 1900 +  time->tm_year << std::endl;
	std::cout << "Month: " << 1 +  time->tm_mon << std::endl;
	std::cout << "Day: " << time->tm_mday << std::endl;
	std::cout << "Time: " << 1 + time->tm_hour << ": ";
	std::cout << 1 + time->tm_min << ": ";
	std::cout << 1 + time->tm_sec << std::endl;
	return 0;
}
