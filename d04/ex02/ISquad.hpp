/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:53:14 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 13:35:25 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad 
{
	public:
		virtual ~ISquad(void) {};
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine *getUnit(int) const = 0;
		virtual int push(ISpaceMarine * marine) = 0;
};

#endif
