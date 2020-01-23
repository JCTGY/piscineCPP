/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:39:03 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/23 14:46:22 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	/*
	Span span = Span(10005);
	std::vector<int> vectorInt;
	vectorInt.reserve(10000);
	for (int i = 0;  i < 10000; i++) {
		vectorInt.push_back(i);
	}
	try {
		span.addStackNumbers(vectorInt);
	} catch (std::exception &e) {
		std::cout << "add number failed" << std::endl;
	}
	*/

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	
	return 0;;
}
