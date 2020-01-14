/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:56:05 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 21:06:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Default Cannonoical
PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5) {

		std::cout << "A " << AWeapon::getName() << " is created" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy) : AWeapon(copy) {

	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle & inputClass) {

	if (this == &inputClass)
		return *this;
	AWeapon::operator = (inputClass);
	return *this;
}

PlasmaRifle::~PlasmaRifle(void) {

	std::cout << AWeapon::getName() << " is destored" << std::endl;
}

// member fuction
void PlasmaRifle::attack(void) const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
