/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characte.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:31:42 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 23:37:58 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Default Cananoical Class
Character::Character(std::string name) : _name(name), _actionPoint(40), _aweapon(NULL) {
		std::cout << "Empty Chacater !" << std::endl;
}

Character::Character(const Character & copy) {

	*this = copy;
}

Character &Character::operator = (const Character & inputClass) {

	if (this == &inputClass)
		return *this;
	this->_name = inputClass._name;
	this->_actionPoint = inputClass._actionPoint;
	this->_aweapon = inputClass._aweapon;
	return *this;
}

Character::~Character(void) { 
	
	std::cout << "Character is dead" << std::endl;
}

// Get function
std::string const & Character::getName(void) const { return this->_name; }
int const & Character::getActionPoint(void) const { return this->_actionPoint; }
AWeapon const *Character::getWeapon(void) const { return this->_aweapon; }

void Character::recoverAP(void) { 

	if (_actionPoint >= 30) {
		_actionPoint = 40;
	} else {
		_actionPoint += 10;
	}
}

void Character::equip(AWeapon *weapon) { this->_aweapon = weapon; }

void Character::attack(Enemy *enemy) {

	if (enemy && this->_aweapon != NULL && 
			this->_actionPoint >= this->_aweapon->getActionCost()) {
		std::cout << _name << " attacks " << enemy->getType() 
			<< " with a " << _aweapon->getName() << std::endl;
		enemy->takeDamage(this->_aweapon->getDamagePoint());
		if (enemy->getHitPoint() <= 0)
			delete enemy;
		_actionPoint -= _aweapon->getActionCost();
		if (_actionPoint <= 0)
			_actionPoint = 0;
	}
}

std::ostream &operator << (std::ostream &output, Character &inputClass) {

	if (inputClass.getWeapon() != NULL) {
		output << inputClass.getName() << " has " << inputClass.getActionPoint() 
			<< " AP and wields a " << inputClass.getWeapon()->getName() << std::endl;
	} else {
		output << inputClass.getName() << " has " << inputClass.getActionPoint() 
		 << "AP and is unarmed" << std::endl;
	}
	return output;
}

