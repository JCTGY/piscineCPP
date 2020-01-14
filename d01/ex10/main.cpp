/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:38:06 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 19:49:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void outPutfile(char *file) {
	std::string line;
	std::ifstream myFile(file);
	if (myFile.is_open()) {
		while (std::getline(myFile, line)) {
			std::cout << line << std::endl;
		}
		myFile.close();
	} else
		std::cout << file << " :No such file or directory" << std::endl;
}

void inputToFile(int start, int indexCombine, char *file, char **files) {
	std::string line;
	std::ofstream newFile(file);
	for (int i = start; i < indexCombine; i++) {
		std::ifstream myFile(files[i]);		
		if (myFile.is_open()) {
			while (std::getline(myFile, line)) {
				newFile << line << std::endl;
			}
			myFile.close();
		} else
			std::cout << file << " :No such file or directory" << std::endl;
	}
}

void checkFiles(int start, int numOfFiles, char **files) {

	int indexCombine = 0;
	std::string line;
	for (int i = start; i < numOfFiles; i++) {
		line = files[i];
		if (!line.compare(">")) {
			indexCombine = i;
			break ;
		}
	}
	if (indexCombine != 0 && !files[indexCombine + 1]) {
		std::cout << "Need input file after >" << std::endl;
		return ;
	} else if (indexCombine == 0) {
		for (int i = start; i < numOfFiles; i++) {
		   outPutfile(files[i]);
		}		
	} else if (numOfFiles + 1 > indexCombine) {
		inputToFile(start, indexCombine, files[indexCombine + 1], files);
		checkFiles(indexCombine + 2, numOfFiles, files);
	}
	std::cout << "indexCombine = " << indexCombine << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 2) {
		outPutfile(argv[1]);
	} else if (argc > 2) {
		checkFiles(1, argc, argv);
	} else {
		std::cout << "Invalid argument" << std::endl;
	}

	return 0;
}
