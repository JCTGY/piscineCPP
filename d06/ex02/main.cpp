/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:21:28 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 21:56:01 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <random>
#include <iostream>

Base * generate(void) {
	Base *base = nullptr;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 1000);
	int num = uid(gen) % 3;

	switch (num) {
		case 0:
			base = new A();
			break; 
		case 1:
			base = new B();
			break ;
		case 2:
			base = new C();
			break;
		default:
			break;
	}
	return base;
}

void identify_from_pointer(Base *p) {

	std::cout << "Try dynamic_cast pointer: ";
	if (A *a = dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Cannot dynamic_cast to A~C" << std::endl;
}

void identify_from_reference(Base & p) {
	
	std::cout << "Try dynamic_cast reference: ";
	try {
		(void)dynamic_cast<A & >(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast & notA) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast & notB) {
			try {
				(void)dynamic_cast<C & >(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast & notC) {
				std::cout << "reference dynamic_cast faild: No valid type" << std::endl;
			}
		}
	}
}

int main(void)
{
	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return 0;
}

