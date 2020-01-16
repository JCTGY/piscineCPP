/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:49:24 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/16 11:00:08 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { }
Ice::Ice(const Ice & copy) { *this = copy; }
Ice &Ice::operator = (const Ice & inputClass) {
	if (this == &inputClass)
		return *this;
	this->setXP(inputClass.getXP());
	return *this;
}
Ice::~Ice(void) { }

AMateria *Ice::clone(void) const { return AMateria(this->getXP()); }
void Ice::use(ICharacter & target) {
	if (!target)
		return ;
	this->setXp(getXp + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
