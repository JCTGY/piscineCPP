/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:19:52 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:25:48 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define ATTACK_NUM 5
#define ENERGY_ND 25
// Default Canonical Class
ScavTrap::ScavTrap(void) { }

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	
	_hitPoint       = 100;
	_maxHitPoint    = 100;
	_maxEnergy      = 50;
	_energy		    = 50;
	_level          = 1;
	_meleeAttack    = 20;
   	_rangeAttack    = 15;
   	_armorReduction = 3;

	srand(time(0));
	std::cout << "[ScavTrap] ";
	std::cout << "Set ScavTrap: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) {

	std::cout << "[ScavTrap] ";
	std::cout << "Copy new objet" << std::endl;
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
	std::cout << "[ScavTrap] ";
	std::cout << "Set operator" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "[ScavTrap] ";
	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}

// member function
void ScavTrap::challengeNewcomer(std::string const & target) {

	if (_energy >= ENERGY_ND) {
		std::cout << "[ScavTrap] ";
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
	} else { 
		std::cout << "[ScavTrap] ";
		std::cout << "shit... I will do it next time" << std::endl;
	}
}

void ScavTrap::lazyChallenge(std::string const & target) {

	std::cout << "[ScavTrap] ";
	std::cout << target <<  " Challenge to eat some lazy shit???" << std::endl;
}

void ScavTrap::wowoChallenge(std::string const & target) {

	std::cout << "[ScavTrap] ";
	std::cout << target <<  " Challenge to eat some wowo shit???" << std::endl;
}
void ScavTrap::latataChallenge(std::string const & target) {

	std::cout << "[ScavTrap] ";
	std::cout << target <<  " Challenge to eat some latata shit???" << std::endl;
}

void ScavTrap::hahaChallenge(std::string const & target) {

	std::cout << "[ScavTrap] ";
	std::cout << target <<  " Challenge to eat some haha shit???" << std::endl;
}
void ScavTrap::doneChallenge(std::string const & target) {

	std::cout << "[ScavTrap] ";
	std::cout << target <<  "Challange... YOU ARE DONE!!!!!" << std::endl;
}
