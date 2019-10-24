/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:56:59 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 21:30:50 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void) {

	std::cout << "Empty Weapon is created" << std::endl;
}
Weapon::Weapon(std::string type) {

	_type = type;
	std::cout << "Weapon is created" << std::endl;
}

Weapon::~Weapon(void) {

	std::cout << "Weapon is gone" << std::endl;
}

std::string Weapon::getType(void) const {

	return _type;
}

void Weapon::setType(std::string type) {

	_type = type;
}
