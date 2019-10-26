/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:56:25 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 22:11:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) { }

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name) {

	_name           = name;
	_hitPoint       = FragTrap::getHitPoint();
	_maxHitPoint    = FragTrap::getMaxHitPoint();
	_energy         = NinjaTrap::getEnergy();
	_maxEnergy      = NinjaTrap::getMaxEnergy();
	_level          = 1;
	_meleeAttack    = NinjaTrap::getMeleeAttack();
   	_rangeAttack    = FragTrap::getRangeAttack();
   	_armorReduction = FragTrap::getArmorReduction();

	srand(time(0));
	std::cout << "[SuperTrap] ";
	std::cout << "Set SuperTrap: " << _name << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & copy) : NinjaTrap(copy), FragTrap(copy) {

	std::cout << "[SuperTrap] ";
	std::cout << "Copy new objet" << std::endl;
	*this = copy;
}

SuperTrap & SuperTrap::operator = (const SuperTrap & inputClass) {

	_name           = inputClass.getName();
	_hitPoint       = inputClass.getHitPoint();
	_maxHitPoint    = inputClass.getMaxHitPoint();
	_maxEnergy      = inputClass.getMaxEnergy();
	_level          = inputClass.getLevel();
	_meleeAttack    = inputClass.getMeleeAttack();
	_rangeAttack    = inputClass.getRangeAttack();
	_armorReduction = inputClass.getArmorReduction();
	std::cout << "[SuperTrap] ";
	std::cout << "Set operator" << std::endl;
	return *this;
}

std::string SuperTrap::getName(void) const { return _name; }

SuperTrap::~SuperTrap(void) {

	std::cout << "[SuperTrap] ";
	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}
