/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:19:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 13:27:35 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define ATTACK_NUM 5
#define ENERGY_ND 25
// Default Canonical Class
ScavTrap::ScavTrap(void) { }

ScavTrap::ScavTrap(std::string const & name) : _name(name) {
	
	_hitPoint       = 100;
	_maxHitPoint    = 100;
	_maxEnergy      = 50;
	_energy		    = 50;
	_level          = 1;
	_meleeAttack    = 20;
   	_rangeAttack    = 15;
   	_armorReduction = 3;

	srand(time(0));
	std::cout << "Set ScavTrap: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) {

	*this = copy;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & inputClass) {

	_name           = inputClass.getName();
	_hitPoint       = inputClass.getHitPoint();
	_maxHitPoint    = inputClass.getMaxHitPoint();
	_maxEnergy      = inputClass.getMaxEnergy();
	_level          = inputClass.getLevel();
	_meleeAttack    = inputClass.getMeleeAttack();
	_rangeAttack    = inputClass.getRangeAttack();
	_armorReduction = inputClass.getArmorReduction();
	return *this;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}

// Get function
std::string  ScavTrap::getName(void) const { return _name; }
unsigned int ScavTrap::getHitPoint(void) const { return _hitPoint; }
unsigned int ScavTrap::getMaxHitPoint(void) const { return _maxHitPoint; }
unsigned int ScavTrap::getEnergy(void) const { return _energy; }
unsigned int ScavTrap::getMaxEnergy(void) const { return _maxEnergy; }
unsigned int ScavTrap::getLevel(void) const { return _level; }
unsigned int ScavTrap::getMeleeAttack(void) const { return _meleeAttack; }
unsigned int ScavTrap::getRangeAttack(void) const { return _rangeAttack; }
unsigned int ScavTrap::getArmorReduction(void) const { return _armorReduction; }

// member function
void ScavTrap::rangedAttack(std::string const & target) {

	std::cout << "Eat this shit from the Dark..." << target << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "Heavy Strike!! Hope does not miss" << target<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount <= _hitPoint) {
		_hitPoint -= amount;
		std::cout << "Got shit by " << amount << std::endl;
	} else {
		_hitPoint = 0;
		std::cout << "Eat to much shit..." << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {

	if ((_maxHitPoint - amount) >= _hitPoint) {
		_hitPoint += amount;
		std::cout << "Eat some shit... add " << amount << std::endl;
	} else if (amount < _maxHitPoint) {
		if (_maxHitPoint == _hitPoint) {
			std::cout << "I don't need any shit now. Thank you" << std::endl;
		} else {
			amount = _maxHitPoint - _hitPoint;
			_hitPoint = _maxHitPoint;
			std::cout << "Eat too much shit... " << amount << " is enough" << std::endl;
		}
	} else
		std::cout << "Too much shit..., Please Stop.." << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {

	if (_energy >= ENERGY_ND) {
		std::cout << target <<  " Radey to take some random challange???" << std::endl;
		void (ScavTrap::*randomChallenges[ATTACK_NUM]) (std::string const & target) = {

			// Needed to add attack
			&ScavTrap::lazyChallenge,
			&ScavTrap::wowoChallenge,
			&ScavTrap::latataChallenge,
			&ScavTrap::hahaChallenge,
			&ScavTrap::doneChallenge,
		};
		int randIndex = (rand() % ATTACK_NUM);
		for (int i = 0; i < ATTACK_NUM; i++) {
			if (randIndex == i)
				(this->*randomChallenges[i])(target);
		}
	} else 
		std::cout << "shit... I will do it next time" << std::endl;
}

void ScavTrap::lazyChallenge(std::string const & target) {

	std::cout << target <<  " Challenge to eat some lazy shit???" << std::endl;
}

void ScavTrap::wowoChallenge(std::string const & target) {

	std::cout << target <<  " Challenge to eat some wowo shit???" << std::endl;
}
void ScavTrap::latataChallenge(std::string const & target) {

	std::cout << target <<  " Challenge to eat some latata shit???" << std::endl;
}

void ScavTrap::hahaChallenge(std::string const & target) {

	std::cout << target <<  " Challenge to eat some haha shit???" << std::endl;
}
void ScavTrap::doneChallenge(std::string const & target) {

	std::cout << target <<  "Challange... YOU ARE DONE!!!!!" << std::endl;
}
