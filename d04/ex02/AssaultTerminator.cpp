/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:45:22 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 19:01:00 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) { std::cout << "* teleports from space *" << std::endl; }
AssaultTerminator::AssaultTerminator(const AssaultTerminator & copy) { *this = copy; }
AssaultTerminator & AssaultTerminator::operator = (const AssaultTerminator & inputClass) {
	(void)inputClass;
	return *this;
}
AssaultTerminator::~AssaultTerminator(void) {std::cout << "I’ll be back ..." << std::endl; }

ISpaceMarine * AssaultTerminator::clone(void) const { return new AssaultTerminator(*this); }

void AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
