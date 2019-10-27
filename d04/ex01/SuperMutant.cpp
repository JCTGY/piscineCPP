/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutan.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:01:06 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 22:14:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
	: Enemy("SupetMutant" , 170) {
		std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & copy) {

	*this = copy;
}

SuperMutant &SuperMutant::operator = (const SuperMutant & inputClass) {

	if (this == &inputClass)
		return *this;
	Enemy::operator = (inputClass);
	return *this;
}

SuperMutant::~SuperMutant(void) {

	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {

	Enemy::takeDamage(damage - 3);
}

