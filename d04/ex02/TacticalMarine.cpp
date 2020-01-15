/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:08:43 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 16:35:20 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) { std::cout << "Tactical Marine ready for battle" << std::endl; }
TacticalMarine::TacticalMarine(const TacticalMarine & copy) { this = &copy; }
TacticalMarine & TacticalMarine::operator = (const TacticalMarine & inputClass) { return *this; }
TacticalMarine::~TacticalMarine(void) { std::cout << "Aaargh ..." << std::endl; }

ISpaceMarine * TacticalMarine::clone(void) const {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return *this;
}

void TacticalMarine::battelCry(void) const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangeAttack(void) const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
