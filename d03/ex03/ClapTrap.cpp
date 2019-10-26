/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:56:03 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 13:59:22 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define ATTACK_NUM 5

// Default Canonical Class
ClapTrap::ClapTrap(void) { }

ClapTrap::ClapTrap(std::string const & name) : _name(name) {

		srand(time(0));
		std::cout << "[ClapTrap] ";
		std::cout << "Set ClapTrap: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) {

	std::cout << "[ClapTrap] ";
	std::cout << "ClapTrop copy lol" << std::endl;
	*this = copy;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & inputClass) {

	_name           = inputClass.getName();
	_hitPoint       = inputClass.getHitPoint();
	_maxHitPoint    = inputClass.getMaxHitPoint();
	_energy         = inputClass.getEnergy();
	_maxEnergy      = inputClass.getMaxEnergy();
	_level          = inputClass.getLevel();
	_meleeAttack    = inputClass.getMeleeAttack();
	_rangeAttack    = inputClass.getRangeAttack();
	_armorReduction = inputClass.getArmorReduction();
	std::cout << "[ClapTrap] ";
	std::cout << "Set operator" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "[ClapTrap] ";
	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}

// Get function
std::string  ClapTrap::getName(void) const { return _name; }
unsigned int ClapTrap::getHitPoint(void) const { return _hitPoint; }
unsigned int ClapTrap::getMaxHitPoint(void) const { return _maxHitPoint; }
unsigned int ClapTrap::getEnergy(void) const { return _energy; }
unsigned int ClapTrap::getMaxEnergy(void) const { return _maxEnergy; }
unsigned int ClapTrap::getLevel(void) const { return _level; }
unsigned int ClapTrap::getMeleeAttack(void) const { return _meleeAttack; }
unsigned int ClapTrap::getRangeAttack(void) const { return _rangeAttack; }
unsigned int ClapTrap::getArmorReduction(void) const { return _armorReduction; }

// member function
void ClapTrap::rangedAttack(std::string const & target) {

	std::cout << "[ClapTrap] ";
	std::cout << "Eat this shit from the Dark..." << target << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {

	std::cout << "[ClapTrap] ";
	std::cout << "Heavy Strike!! Hope does not miss " << target<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount <= _hitPoint) {
		_hitPoint -= amount;
		std::cout << "[ClapTrap] ";
		std::cout << "Got shit by " << amount << std::endl;
	} else {
		_hitPoint = 0;
		std::cout << "[ClapTrap] ";
		std::cout << "Eat to much shit..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	if ((_maxHitPoint - amount) >= _hitPoint) {
		_hitPoint += amount;
		std::cout << "[ClapTrap] ";
		std::cout << "Eat some shit... add " << amount << std::endl;
	} else if (amount < _maxHitPoint) {
		if (_maxHitPoint == _hitPoint) {
			std::cout << "[ClapTrap] ";
			std::cout << "I don't need any shit now. Thank you" << std::endl;
		} else {
			amount = _maxHitPoint - _hitPoint;
			_hitPoint = _maxHitPoint;
			std::cout << "[ClapTrap] ";
			std::cout << "Eat too much shit... " << amount << " is enough" << std::endl;
		}
	} else {
		std::cout << "[ClapTrap] ";
		std::cout << "Too much shit..., Please Stop.." << std::endl;
	}
}
