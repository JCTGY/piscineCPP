/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:55:49 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/15 18:36:35 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 4) {

		std::string name = argv[1];
		std::string oldString = argv[2];
		std::string newString = argv[3];
		if (oldString == "") {
			std::cout << "Please Enter valid input" << std::endl;
			return -1;
		}
		std::ifstream opFile(name);
		if (!opFile) {
			std::cout << "file input is not corrent" << std::endl;
			return -1;
		}
		std::ofstream saveFile(name + ".replace");
		if (!saveFile) {
			std::cout << "file cannot save" << std::endl;
			return -2;
		}
		std::string saveString;
		while (std::getline(opFile, saveString)) {
			size_t p = saveString.find(oldString); 
			while (p != std::string::npos) {
				 saveString.replace(p, oldString.length(), newString);
				 p = saveString.find(oldString, p + newString.size());
			 }
			 saveFile << saveString << std::endl;
		}
	} else {
		std::cout << "Usage FileName, oldString, newString" << std::endl;
		return -3;
	}
	return 0;
}


