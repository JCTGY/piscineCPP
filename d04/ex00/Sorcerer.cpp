/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:57:23 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 17:47:38 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

// Default Canonical Class
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << "is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & copy) {

	std::cout << _name << "is BACK!!" << std::endl;
	*this = copy;
}

Sorcerer &Sorcerer::operator = (const Sorcerer & inputClass) {

	_name = inputClass.getName();
	_title = inputClass.getTitle();

	return *this;
}

Sorcerer::~Sorcerer(void) { 
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

// Get function
std::string Sorcerer::getName(void) const { return _name; }
std::string Sorcerer::getTitle(void) const { return _title; }

// member function
void Sorcerer::polymorph(Victim const & sadVictim) {

	sadVictim.getPolymorphed();
}

// non-member function
std::ostream  &operator << (std::ostream &output, Sorcerer const &inputClass) {

	output << "I am " << inputClass.getName() << ", " << inputClass.getTitle() << ", and I like ponies !" << std::endl;
	return output;
}
