/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:11:46 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/31 21:34:19 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	unsigned int sizeArray = 25;
	Array<int> arrayInt(sizeArray);
	int a = 'a';
	for (unsigned int i = 0; i < arrayInt.getSizeArray(); i++) {
		arrayInt[i] = a++;
	}
	for (unsigned int i = 0; i < arrayInt.getSizeArray(); i++) {
		std::cout << static_cast<char>(arrayInt[i]) << std::endl;
	}

	unsigned int sizeString = 5;
	Array<std::string> arrayString(sizeString);
	std::string  s[5] = { "pop", "lotal", "caosl", "sfa", "pop" };
	for (unsigned int i = 0; i < sizeof(s)/ sizeof(*s); i++) {
		try {
			arrayString[i] = s[i];
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	for (unsigned int i = 0; i < arrayString.getSizeArray(); i++) {
		std::cout << arrayString[i] << std::endl;
	}

	try {
		std::cout << arrayString[100] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
