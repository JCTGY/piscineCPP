/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:11:05 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 18:57:48 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string zombieType;
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
};

#endif

