/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:21:28 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 12:32:37 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <random>
#include <iostream>

Base * generate(void) {
	Base *b = new Base();
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 1000);
	int num = uid(gen) % 3;

	switch (num) {
		case 1:
			base = 
	}
}
int main(void)
{
	return 0;
}

