/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:27 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 22:00:25 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <random>

# define ATTACK_NUM 5
# define ENERGY_ND 25

// Default Canonical Class
FragTrap::FragTrap(void) { }

FragTrap::FragTrap(std::string const & name) : _name(name), _hitPoint(100), _maxHitPoint(100), 
	_energy(100), _maxEnergy(100), _level(1), _meleeAttack(30), _rangeAttack(20), _armorReduction(5) {
		
		srand(time(0));
		std::cout << "KKCT89 ";
		std::cout << "Set FragTrap: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy) {

	std::cout << "KKCT89 ";
	std::cout << "Hello copy" << std::endl;
	*this = copy;
}

FragTrap & FragTrap::operator = (const FragTrap & inputClass) {

	_name           = inputClass.getName(); 
	_hitPoint       = inputClass.getHitPoint();      
	_maxHitPoint    = inputClass.getMaxHitPoint();
	_energy         = inputClass.getEnergy();
	_maxEnergy      = inputClass.getMaxEnergy();     
	_level          = inputClass.getLevel();         
	_meleeAttack    = inputClass.getMeleeAttack();   
	_rangeAttack    = inputClass.getRangeAttack();   
	_armorReduction = inputClass.getArmorReduction();

	std::cout << "KKCT89 ";
	std::cout << "Hello operator" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void) {
	
	std::cout << "KKCT89 ";
	std::cout << "Feel so good xdd. Seee you next time" << std::endl;
}

// Get function
std::string  FragTrap::getName(void) const { return _name; }
unsigned int FragTrap::getHitPoint(void) const { return _hitPoint; }
unsigned int FragTrap::getMaxHitPoint(void) const { return _maxHitPoint; }
unsigned int FragTrap::getEnergy(void) const { return _energy; }
unsigned int FragTrap::getMaxEnergy(void) const { return _maxEnergy; }
unsigned int FragTrap::getLevel(void) const { return _level; }
unsigned int FragTrap::getMeleeAttack(void) const { return _meleeAttack; }
unsigned int FragTrap::getRangeAttack(void) const { return _rangeAttack; }
unsigned int FragTrap::getArmorReduction(void) const { return _armorReduction; }

// member function
void FragTrap::rangedAttack(std::string const & target) {

	std::cout << "KKCT89 ";
	std::cout << "Eat this shit from the Dark..." << target << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {

	std::cout << "KKCT89 ";
	std::cout << "Heavy Strike!! Hope does not miss" << target<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount <= _hitPoint) {
		_hitPoint -= amount;
		std::cout << "KKCT89 ";
		std::cout << "Got shit by " << amount << std::endl;
	} else {
		_hitPoint = 0;
		std::cout << "KKCT89 ";
		std::cout << "Eat to much shit..." << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {

	if ((_maxHitPoint - amount) >= _hitPoint) {
		_hitPoint += amount;
		std::cout << "KKCT89 ";
		std::cout << "Eat some shit... add " << amount << std::endl;
	} else if (amount < _maxHitPoint) {
		if (_maxHitPoint == _hitPoint) {
			std::cout << "KKCT89 ";
			std::cout << "I don't need any shit now. Thank you" << std::endl;
		} else {
			amount = _maxHitPoint - _hitPoint;
			_hitPoint = _maxHitPoint;
			std::cout << "KKCT89 ";
			std::cout << "Eat too much shit... " << amount << " is enough" << std::endl;
		}
	} else {
		std::cout << "KKCT89 ";
		std::cout << "Too much shit..., Please Stop.." << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (_energy >= ENERGY_ND) {
		_energy -= ENERGY_ND;
		std::cout << "KKCT89 ";
		std::cout << target <<  " Ready to eat some random shit???" << std::endl;
		void (FragTrap::*randomAttacks[ATTACK_NUM]) (std::string const & target) = {
		
			// Needed to add attack
			&FragTrap::lazyAttack,
			&FragTrap::wowoAttack,
			&FragTrap::latataAttack,
			&FragTrap::hahaAttack,
			&FragTrap::doneAttack,
		};
		int randIndex = (rand() % ATTACK_NUM);
		for (int i = 0; i < ATTACK_NUM; i++) {
			if (randIndex == i)
				(this->*randomAttacks[i])(target);
		}
	} else {
		std::cout << "KKCT89 ";
		std::cout << "shit... I will do it next time" << std::endl;
	}
}

void FragTrap::lazyAttack(std::string const & target) {
		
	std::cout << "KKCT89 ";
	std::cout << target <<  " Ready to eat some lazy shit???" << std::endl;
}

void FragTrap::wowoAttack(std::string const & target) {
		
	std::cout << "KKCT89 ";
	std::cout << target <<  " Ready to eat some wowo shit???" << std::endl;
}
void FragTrap::latataAttack(std::string const & target) {
		
	std::cout << "KKCT89 ";
	std::cout << target <<  " Ready to eat some latata shit???" << std::endl;
}

void FragTrap::hahaAttack(std::string const & target) {
		
	std::cout << "KKCT89 ";
	std::cout << target <<  " Ready to eat some haha shit???" << std::endl;
}
void FragTrap::doneAttack(std::string const & target) {
	
	std::cout << "KKCT89 ";
	std::cout << target <<  " YOU ARE DONE!!!!!" << std::endl;
}
