/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:36:58 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:54:54 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// Default Canonocal Class
Peon::Peon(std::string name) : Victim(name) {

	std::cout << "Zog zog. " << std::endl;
}

Peon::Peon(const Peon & copy) : Victim(copy) {

	std::cout << "Can you copy Peon" << std::endl;
	*this = copy;
}

Peon &Peon::operator = (const Peon & inputClass) {

	if (this == &inputClass)
		return *this;

	Victim::operator = (inputClass);
	return *this;
}

Peon::~Peon(void) {

	std::cout << "Bleuark..." << std::endl;
}

// member function
void Peon::getPolymorphed(void) const {

	std::cout << Victim::getName() << " has been turned into a pink pony !" << std::endl;
}
