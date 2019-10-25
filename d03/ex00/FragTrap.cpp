/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:27 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 08:38:33 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default Canonical Class
FragTrap::FragTrap(void) { }

FragTrap::FragTrap(std::string const & name) : _name(name), _hitPoint(100), _maxHitPoint(100), 
	_maxEnergy(100), _level(1), _meleeAttack(30), _rangeAttack(20), _armorReduction(5) {

		std::cout << "Set FragTrap: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap & name) {

	*this = name;
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
	return *this;
}

FragTrap::~FragTrap(void) {
	
	std::cout << "Feel so good xdd. Seee you next time" << std::endl;
}

// Get function
std::string FragTrap::getName(void) const { return _name; }
int	FragTrap::getHitPoint(void) const { return _hitPoint; }
int	FragTrap::getMaxHitPoint(void) const { return _maxHitPoint; }
int	FragTrap::getMaxEnergy(void) const { return _maxEnergy; }
int	FragTrap::getLevel(void) const { return _level; }
int	FragTrap::getMeleeAttack(void) const { return _meleeAttack; }
int	FragTrap::getRangeAttack(void) const { return _rangeAttack; }
int	FragTrap::getArmorReduction(void) const { return _armorReduction; }

// member function

void FragTrap::rangedAttack(std::string const & target) {

	std::cout << "Eat this shot from the Dark..." << target << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {

	std::cout << "Heavy Strike!! Hope does not miss" << target<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

	std::cout << "Got shit by " << amount << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {

	std::cout << "Eat some shit... add" << amount << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::cout << target <<  " one is hard" << std::endl;
}
