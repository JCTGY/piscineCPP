/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:46:48 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 17:25:21 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class SuperTrap : public FragTrap, public NinjaTrap {

	private:
		std::string _name;
		unsigned int _hitPoint;
		unsigned int _maxHitPoint;
		unsigned int _energy;
		unsigned int _maxEnergy;
		unsigned int _level;
		unsigned int _meleeAttack;
		unsigned int _rangeAttack;
		unsigned int _armorReduction;
	public:
		// Default Canonical Class
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap & copy);
		SuperTrap &operator = (const SuperTrap & inputClass);
		~SuperTrap(void);

		std::string getName(void) const;

		using FragTrap::getHitPoint;
		using FragTrap::getMaxHitPoint;
		using NinjaTrap::getEnergy;
		using NinjaTrap::getMaxEnergy;
		using NinjaTrap::getMeleeAttack;
		using FragTrap::getRangeAttack;
		using FragTrap::getArmorReduction;
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
		using NinjaTrap::beRepaired;
		using NinjaTrap::takeDamage;
};

#endif
