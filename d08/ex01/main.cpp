/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:39:03 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/23 19:12:18 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	std::cout << " ================== span(10000) ===============" << std::endl;
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
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	std::cout << std::endl << " ================== span(-5 ~ 17) ===============" << std::endl;
	Span sp = Span(5);
	sp.addNumber(-5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << std::endl << " ================== span(INT_MAX INT_MIN) ===============" << std::endl;
	Span minmax = Span(2);
	minmax.addNumber(INT_MAX);
	minmax.addNumber(INT_MIN);
	std::cout << minmax.shortestSpan() << std::endl;
	std::cout << minmax.longestSpan() << std::endl;
	
	std::cout << std::endl << " ================== span(Five & Ten) ===============" << std::endl;
	Span ft = Span(2);
	ft.addNumber(-5);
	ft.addNumber(10);
	std::cout << ft.shortestSpan() << std::endl;
	std::cout << ft.longestSpan() << std::endl;


	std::cout << std::endl << " ================== Try exception ===============" << std::endl;
	Span ex = Span(3);
	try {
		ex.addNumber(5);
		ex.addNumber(6);
		ex.addNumber(7);
		ex.addNumber(8);
	} catch (std::exception &e) {
		std::cout << "over load" << std::endl;
	}
	return 0;;
}
