/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:15:15 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 13:23:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <random>

class ScavTrap {

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
		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(const ScavTrap & copy);
		ScavTrap &operator = (const ScavTrap & inputClass);
		~ScavTrap(void);

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
		void challengeNewcomer(std::string const & target);

		void lazyChallenge(std::string const & target);
		void wowoChallenge(std::string const & target);
		void latataChallenge(std::string const & target);
		void hahaChallenge(std::string const & target);
		void doneChallenge(std::string const & target);
};

#endif
