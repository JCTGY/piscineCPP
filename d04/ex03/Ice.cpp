/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:49:24 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/15 20:09:16 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { }
Ice::Ice(const Ice & copy) { *this = copy; }
Ice &Ice::operator = (const Ice & inputClass) {
	if (this == &inputClass)
		return *this;
	
