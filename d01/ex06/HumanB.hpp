/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:44:39 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 21:37:03 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB 
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon); // set reference to the pointer
};

#endif
