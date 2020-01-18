/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:27 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:25:13 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <random>

#define ATTACK_NUM 5
// Default Canonical Class
FragTrap::FragTrap(void) { }

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
   	
	_hitPoint       = 100;
	_maxHitPoint    = 100;
	_energy         = 100;
	_maxEnergy      = 100;
	_level          = 1;
	_meleeAttack    = 30;
   	_rangeAttack    = 20;
   	_armorReduction = 5;

	srand(time(0));
	std::cout << "[FragTrap] ";
	std::cout << "Set FragTrap: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy) : ClapTrap(copy) {

	std::cout << "[FragTrap] ";
	std::cout << "Copy new objet" << std::endl;
	*this = copy;
}

FragTrap & FragTrap::operator = (const FragTrap & inputClass) {

	_name           = inputClass.getName(); 
	_hitPoint       = inputClass.getHitPoint();      
	_maxHitPoint    = inputClass.getMaxHitPoint();   
	_maxEnergy      = inputClass.getMaxEnergy();     
	_level          = inputClass.getLevel();         
	_meleeAttack    = inputClass.getMeleeAttack();   
	_rangeAttack    = inputClass.getRangeAttack();   
	_armorReduction = inputClass.getArmorReduction();
	std::cout << "[FragTrap] ";
	std::cout << "Set operator" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void) {
	
	std::cout << "[FragTrap] ";
	std::cout << "Feel so good xdd. Seee you next time " << _name << std::endl;
}

// member function
void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::cout << "[FragTrap] ";
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
}

void FragTrap::lazyAttack(std::string const & target) {

	std::cout << "[FragTrap] ";
	std::cout << target <<  " Ready to eat some lazy shit???" << std::endl;
}

void FragTrap::wowoAttack(std::string const & target) {

	std::cout << "[FragTrap] ";
	std::cout << target <<  " Ready to eat some wowo shit???" << std::endl;
}
void FragTrap::latataAttack(std::string const & target) {

	std::cout << "[FragTrap] ";
	std::cout << target <<  " Ready to eat some latata shit???" << std::endl;
}

void FragTrap::hahaAttack(std::string const & target) {

	std::cout << "[FragTrap] ";
	std::cout << target <<  " Ready to eat some haha shit???" << std::endl;
}
void FragTrap::doneAttack(std::string const & target) {

	std::cout << "[FragTrap] ";
	std::cout << target <<  " YOU ARE DONE!!!!!" << std::endl;
}
