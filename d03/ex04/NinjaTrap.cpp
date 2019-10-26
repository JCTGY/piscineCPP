/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:12:25 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 21:49:58 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <random>

#define ATTACK_NUM 5
// Default Canonical Class
NinjaTrap::NinjaTrap(void) { }

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name) {

	_hitPoint       = 60;
	_maxHitPoint    = 60;
	_energy         = 120;
	_maxEnergy      = 120;
	_level          = 1;
	_meleeAttack    = 60;
   	_rangeAttack    = 5;
   	_armorReduction = 0;

	srand(time(0));
	std::cout << "[NinjaTrap] ";
	std::cout << "Set NinjaTrap: " << _name << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & copy) : ClapTrap(copy) {

	std::cout << "[NinjaTrap] ";
	std::cout << "Copy new objet" << std::endl;
	*this = copy;
}

NinjaTrap & NinjaTrap::operator = (const NinjaTrap & inputClass) {

	_name           = inputClass.getName();
	_hitPoint       = inputClass.getHitPoint();
	_maxHitPoint    = inputClass.getMaxHitPoint();
	_maxEnergy      = inputClass.getMaxEnergy();
	_level          = inputClass.getLevel();
	_meleeAttack    = inputClass.getMeleeAttack();
	_rangeAttack    = inputClass.getRangeAttack();
	_armorReduction = inputClass.getArmorReduction();
	std::cout << "[NinjaTrap] ";
	std::cout << "Set operator" << std::endl;
	return *this;
}

NinjaTrap::~NinjaTrap(void) {

	std::cout << "[NinjaTrap] ";
	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}

// Get function

unsigned int NinjaTrap::getEnergy(void) const { return _energy; }
unsigned int NinjaTrap::getMaxEnergy(void) const { return _maxEnergy; }

// member function
void NinjaTrap::rangedAttack(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	ClapTrap::rangedAttack(target);
}

void NinjaTrap::meleeAttack(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	ClapTrap::meleeAttack(target);
}

void NinjaTrap::takeDamage(unsigned int amount) {

	std::cout << "[NinjaTrap] ";
	ClapTrap::takeDamage(amount);
}

void NinjaTrap::beRepaired(unsigned int amount) {

	std::cout << "[NinjaTrap] ";
	ClapTrap::beRepaired(amount);
}

void NinjaTrap::ninjaShoebox(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  " Ninja is ready to eat some random shit???" << std::endl;
	void (NinjaTrap::*randomAttacks[ATTACK_NUM]) (std::string const & target) = {

		// Needed to add attack
		&NinjaTrap::lazyNinja,
		&NinjaTrap::wowoNinja,
		&NinjaTrap::latataNinja,
		&NinjaTrap::hahaNinja,
		&NinjaTrap::doneNinja,
	};
	int randIndex = (rand() % ATTACK_NUM);
	for (int i = 0; i < ATTACK_NUM; i++) {
		if (randIndex == i)
			(this->*randomAttacks[i])(target);
	}
}

void NinjaTrap::lazyNinja(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  "Ninja is ready to eat some lazy shit???" << std::endl;
}

void NinjaTrap::wowoNinja(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  "Ninja is ready to eat some wowo shit???" << std::endl;
}
void NinjaTrap::latataNinja(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  "Ninja is ready to eat some latata shit???" << std::endl;
}

void NinjaTrap::hahaNinja(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  "Ninja is ready to eat some haha shit???" << std::endl;
}
void NinjaTrap::doneNinja(std::string const & target) {

	std::cout << "[NinjaTrap] ";
	std::cout << target <<  "YOU ARE DONE!!!!!" << std::endl;
}
