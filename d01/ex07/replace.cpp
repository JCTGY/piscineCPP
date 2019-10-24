/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:55:49 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 22:35:17 by jchiang-         ###   ########.fr       */
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
			for (size_t p = saveString.find(oldString); p != std::string::npos; p = saveString.find(oldString, p)) {
				 saveString.replace(saveString.find(oldString), oldString.length(), newString);
			 }
			 saveFile << saveString << std::endl;
		}
	} else {
		std::cout << "Usage FileName, oldString, newString" << std::endl;
		return -3;
	}
	return 0;
}


