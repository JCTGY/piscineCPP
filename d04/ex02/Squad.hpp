/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:03:44 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 14:33:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct s_node {
	ISpaceMarine *marine;
	s_node *next;
}t_node;

typedef struct s_squad {
	s_node *last;
	s_node *first;
	int num;
}t_squad;

class Squad : public ISquad 
{
	private:
		t_squad *_squadArmy;
	public:
		Squad(void);
		Squad(const Squad & copy);
		Squad &operator = (const Squad & inputClass);
		~Squad(void);
		int getCount(void) const;
		ISpaceMarine *getUnit(int) const;
		int push(ISpaceMarine *marine);
};

#endif
