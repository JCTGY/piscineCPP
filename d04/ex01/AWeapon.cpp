/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:36:19 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 20:51:48 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// Default Cannonoical
AWeapon::AWeapon(void) { }

AWeapon::AWeapon(std::string name, int damagePoint, int actionCost) 
	: _name(name), _damagePoint(damagePoint), _actionCost(actionCost) {

		std::cout << "A " << _name << " is created" << std::endl;
}

AWeapon::AWeapon(const AWeapon & copy) {

	*this = copy;
}

AWeapon &AWeapon::operator = (const AWeapon & inputClass) {

	if (this == &inputClass)
		return *this;
	_name = inputClass.getName();
	_damagePoint = inputClass.getDamagePoint();
	_actionCost = inputClass.getActionCost();

	return *this;
}

AWeapon::~AWeapon(void) {

	std::cout << _name << " is destored" << std::endl;
}

// Get function
std::string AWeapon::getName(void) const { return _name; }
int AWeapon::getDamagePoint(void) const { return _damagePoint; }
int AWeapon::getActionCost(void) const { return _actionCost; }
