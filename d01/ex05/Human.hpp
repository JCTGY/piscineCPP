/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:44:01 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 20:04:20 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human 
{
	private:
		Brain _brain;

	public:
		Human(void);
		~Human(void);
		Brain & getBrain(void);
		std::string identify(void);
};

#endif
