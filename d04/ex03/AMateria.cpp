/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:38:51 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/16 10:22:14 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default type"), _xp(0) { }
AMateria::AMateria(std::string const & type) : _type(type), _xp(0) { };
AMateria::~AMateria(void) { };

std::string const  & AMateria::getType(void) const { return _type; }
unsigned int AMateria::getXP(void) const { return _xp; }
void AMateria::setXP(int xp) { this->_xp = xp; }
