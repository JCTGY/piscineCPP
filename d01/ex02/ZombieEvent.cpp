/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:53:47 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 19:02:23 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	return ;
}

ZombieEvent::~ZombieEvent(void){
	return ;
}

void ZombieEvent::setZombieType(std::string type){
	this->zombieType = type;
}

Zombie *ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(this->zombieType, name);
	return zombie;
}

void ZombieEvent::randomChump(std::string name){
	Zombie zombie = Zombie(this->zombieType, name);
}
