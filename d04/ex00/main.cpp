/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:30:31 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:36:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer lol = Sorcerer("Bob", "Dummy");
	std::cout << lol << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;
	
	Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}

