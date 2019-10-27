/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:56:05 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:44:01 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Default Cannonoical
PlasmaRifle::PlasmaRifle(void) { }

PlasmaRifle::PlasmaRifle(std::string name, int damagePoint, int actionCost)
	: AWeapon(name, damagePoint, actionCost) {

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
