/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:16:06 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 16:21:39 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) 
{
    Logger loggre = Logger("hello");
    loggre.log("logToConsole", "add one message to console");
    loggre.log("logToFile", "add one message to file");
	loggre.log("logToFile", "add second message to file");
	loggre.log("qwar", "not vaild");

    return 0;
}
