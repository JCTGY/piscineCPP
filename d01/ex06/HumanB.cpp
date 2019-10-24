/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:47:13 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 20:43:29 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {

	std::cout << "Empty HumanB created" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name) {

	std::cout <<  _name << " HumanB is created" << std::endl;
}

HumanB::~HumanB(void) {

	std::cout << _name << " is dead" << std::endl;
	return ;
}

void HumanB::attack(void) {

	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	
	_weapon = &weapon;
	std::cout << "set Weapon Humane B" << std::endl;
}
