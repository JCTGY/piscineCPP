/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:01:04 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 16:34:01 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine 
{
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine & copy);
		TacticalMarine &operator = (const TacticalMarine & inputClass);
		virtual ~TacticalMarine(void);
		ISpaceMarine* clone(void) const;
		void battelCry(void) const;
		void rangeAttack(void) const;
		void meleeAttack(void) const;
};

#endif
