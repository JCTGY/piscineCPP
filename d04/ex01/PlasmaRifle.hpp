/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:52:13 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 18:04:26 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		// Default Canonoical Class
		PlasmaRifle(void);
		PlasmaRifle(std::string name, int damagePonit, int actionCost);
		PlasmaRifle(const PlasmaRifle & copy);
		PlasmaRifle &operator = (const PlasmaRifle &inputClass);
		~PlasmaRifle(void);

		// member function
		void attack(void) const;

};

#endif
