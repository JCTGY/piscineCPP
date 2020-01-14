/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:01:04 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 15:44:07 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine 
{
	public:
		TacticalMarine(void);
		TacticalMarine(const & copy);
		TacticalMarine &operator = (const TacticalMarine & inputClass);
		virtual ~TacticalMarine(void);
		ISpaceMarine* clone(void) const;
		void battelCry(void) const;
		void rangeAttack(void) const;
		void meleeAttack(void) const;
};

#endif
