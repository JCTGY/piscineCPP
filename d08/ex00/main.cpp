/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:09:40 by jchiang-          #+#    #+#             */
/*   Updated: 2019/11/01 14:56:57 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <iterator>
#include <array>

int main(void)
{
	std::vector<int> vectorInt;

	for (int i = 3; i < 13; i++) {
		vectorInt.push_back(i);
	}
	for (int i = 0; i < 15; i++) {
		try {
			std::cout << easyfind(vectorInt, i) << std::endl;
		} catch (std::exception & e) {
			std::cout << "index overboard" << std::endl;
		}
	}

	std::vector<int> reserveInt;
	reserveInt.reserve(20);
	for (int i = 3; i < 13; i++) {
		reserveInt.push_back(i);
	}
	for (int i = 0; i < 15; i++) {
		try {
			std::cout << easyfind(reserveInt, i) << std::endl;
		} catch (std::exception & e) {
			std::cout << "index overboard" << std::endl;
		}
	}

	return 0;
}
