/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:06:34 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 21:10:09 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// Default Cannonoical
PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {

		std::cout << "A " << AWeapon::getName() << " is created" << std::endl;
}

PowerFist::PowerFist(const PowerFist & copy) : AWeapon(copy) {

	*this = copy;
}

PowerFist &PowerFist::operator = (const PowerFist & inputClass) {

	if (this == &inputClass)
		return *this;
	AWeapon::operator = (inputClass);
	return *this;
}

PowerFist::~PowerFist(void) {

	std::cout << AWeapon::getName() << " is destored" << std::endl;
}

// member fuction
void PowerFist::attack(void) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}
