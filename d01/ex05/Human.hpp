/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:44:01 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 19:20:15 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human 
{
	private:
		Brain *brain;

	public:
		Human(void);
		~Human(void);
		Brain *getBrain(void);
		std::string identify(void);
};

#endif
