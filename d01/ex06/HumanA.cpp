/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:08:41 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 19:16:36 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) :  name(name), weapon(weapon)  {

	std::cout << "HumanA get weapon" << std::endl;
}

HumanA::~HumanA(void) {

	std::cout << "Human is dead" << std::endl;
	return ;
}

void HumanA::attack(void) {

	std::cout << name << "attacks with his " << weapon.getType() << std::endl;
	return ;
}
