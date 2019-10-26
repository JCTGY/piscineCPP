/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:54:16 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 20:53:59 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ClapTrap {

	protected:
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
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(const ClapTrap & copy);
		ClapTrap &operator = (const ClapTrap & inputClass);
		~ClapTrap(void);

		// Get function
		std::string getName(void) const;
		unsigned int getHitPoint(void) const;
		unsigned int getMaxHitPoint(void) const;
		unsigned int getEnergy(void) const;
		unsigned int getMaxEnergy(void) const;
		unsigned int getLevel(void) const;
		unsigned int getMeleeAttack(void) const;
		unsigned int getRangeAttack(void) const;
		unsigned int getArmorReduction(void) const;

		// member function
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
