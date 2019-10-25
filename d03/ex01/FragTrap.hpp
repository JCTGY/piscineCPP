/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:50 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 12:58:11 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class FragTrap {

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
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(const FragTrap & copy);
		FragTrap &operator = (const FragTrap & inputClass);
		~FragTrap(void);

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
		void vaulthunter_dot_exe(std::string const & target);

		void lazyAttack(std::string const & target);
		void wowoAttack(std::string const & target);
		void latataAttack(std::string const & target);
		void hahaAttack(std::string const & target);
		void doneAttack(std::string const & target);
};

#endif
