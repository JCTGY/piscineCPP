/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characte.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:22:16 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 23:33:26 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

	private:
		std::string _name;
		int _actionPoint;
		AWeapon *_aweapon;

	public:
		// Default Canaonoical Class
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		Character &operator = (const Character & inpuClass);
		~Character(void);

		// Get function
		std::string const & getName(void) const;
		int const & getActionPoint(void) const;
		AWeapon const *getWeapon(void) const;

		// member function
		void recoverAP(void);
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
};

std::ostream &operator << (std::ostream &output, Character & inputClass);

#endif
