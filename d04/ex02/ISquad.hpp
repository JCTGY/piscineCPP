/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:53:14 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 22:03:09 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <string>
#include <iostream>
#include "ISpceMarine.hpp"

class ISquad 
{
	public:
		virtual ~ISquad(void) {};
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine *getUnit(int) const = 0;
		virtual int push(*ISpaceMarine) = 0;
};

#endif
