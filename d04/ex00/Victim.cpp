/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:58:14 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 17:12:00 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

// Default Canonocal Class
Victim::Victim(std::string name) : _name(name) {

	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(const Victim & copy) {

	std::cout << "Can you copy Victim" << std::endl;
	*this = copy;
}

Victim &Victim::operator = (const Victim & inputClass) {

	_name = inputClass.getName();
	return *this;
}

Victim::~Victim(void) {

	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

// Get function
std::string Victim::getName(void) const { return _name; }

// member function
void Victim::getPolymorphed(void) const {

	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

// non-member function
std::ostream &operator << (std::ostream &output, Victim const & inputClass) {

	output << "I'm " << inputClass.getName() << " and I like otters !" << std::endl;

	return output;
}
