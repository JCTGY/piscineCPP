/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:38:17 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 22:22:35 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
	private:
		std::string type;
		std::string name;
	public:
		Zombie(std::string type, std::string name);
		Zombie(void);
		~Zombie(void);
		void setZombieNameType(std::string name, std::string type);
		void announce(void);
};

#endif
