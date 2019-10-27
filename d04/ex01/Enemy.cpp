/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:31:27 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 18:48:19 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Default Canonoical Class
Enemy::Enemy(void) { }

Enemy::Enemy(std::string type, int hitPoint) 
	: _type(type), _hitPoint(hitPoint) {
		
		std::cout << "[Enemy Pop] ";
}

Enemy::Enemy(const Enemy & copy) {

	*this = copy;
}

Enemy &Enemy::operator = (const Enemy & inputClass) {

	_type = inputClass.getType();
	_hitPoint = inputClass.getHitPoint();
	return *this;
}

Enemy::~Enemy(void) {

	std::cout << "[Enemy Die] ";
}

// Get function
std::string Enemy::getType(void) const { return _type; }
int Enemy::getHitPoint(void) const { return _hitPoint; }

// member function
void Enemy::takeDamage(int damage) {

	if (damage > 0 && _hitPoint >= damage) {

		_hitPoint -= damage;
	} else if (damage > _hitPoint)
		_hitPoint = 0;
}
