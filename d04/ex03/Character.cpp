/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:17:06 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 11:06:06 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default Name") {
	for (int i = 0; i < 4; i++)
		_material[i] = NULL;
}
Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_material[i] = NULL;
}
Character::Character(const Ice & copy) { *this = copy; }
Character &Character::operator = (const Character & inputClass) {
	if (this == &inputClass)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (inputClass._material[i] != NULL) {
			this->_material[i] = inputClass._material[i];
		}
	}
	return *this;
}
Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		_material[i] = NULL;
}

std::string const & Character::getName(void) const { return _name; }
void Character::equip(AMateria * m) {
	for (int i = 0; i < 4; i++) {
		if (_material[i] == NULL)
			_material[i] = m;
	}
}

void Character::unequip(int idx) {
	if (idx >= 4 || idx < 0)
		return ;
	_material[idx] = NULL;
}
