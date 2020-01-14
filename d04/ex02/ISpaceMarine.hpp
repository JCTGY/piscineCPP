/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:58:15 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 22:02:31 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine(void) {};
		virtual ISpaceMarine *clone(void) const = 0;
		virtual void battelCry(void) const = 0;
		virtual void rangeAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;
};

#endif
