/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:26:36 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:51:16 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {

	private:
		std::string _name;
		int _damagePoint;
		int _actionCost;

	protected:
		AWeapon(void);

	public:
		// Default Canonoical Class
		AWeapon(std::string name, int damagePonit, int actionCost);
		AWeapon(const AWeapon & copy);
		AWeapon &operator = (const AWeapon &inputClass);
		~AWeapon(void);

		// Get function
		std::string getName(void) const;
		int getDamagePoint(void) const;
		int getActionCost(void) const;

		// member function
		virtual void attack(void) const = 0;

};

#endif
