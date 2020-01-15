/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:08:43 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 18:19:21 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) { std::cout << "Tactical Marine ready for battle" << std::endl; }
TacticalMarine::TacticalMarine(const TacticalMarine & copy) { *this = copy; }
TacticalMarine & TacticalMarine::operator = (const TacticalMarine & inputClass) { 
	(void)inputClass;
	return *this; 
}
TacticalMarine::~TacticalMarine(void) { std::cout << "Aaargh ..." << std::endl; }

ISpaceMarine * TacticalMarine::clone(void) const { return new TacticalMarine(*this); }

void TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
