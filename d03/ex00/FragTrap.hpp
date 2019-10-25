/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:50 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 08:38:36 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap {

	private:
		std::string _name;
		int _hitPoint;
		int _maxHitPoint;
		int _maxEnergy;
		int _level;
		int _meleeAttack;
		int _rangeAttack;
		int _armorReduction;
	public:
		// Default Canonical Class
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(const FragTrap & name);
		FragTrap &operator = (const FragTrap & inputClass);
		~FragTrap(void);

		// Get function
		std::string getName(void) const;
		int getHitPoint(void) const;
		int getMaxHitPoint(void) const;
		int getMaxEnergy(void) const;
		int getLevel(void) const;
		int getMeleeAttack(void) const;
		int getRangeAttack(void) const;
		int getArmorReduction(void) const;

		// member function
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
