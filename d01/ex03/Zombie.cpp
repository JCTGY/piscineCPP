/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:51:49 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 08:28:28 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name){
	this->type = type;
	this->name = name;
	std::cout << this->name << "is comming" << std::endl;
}

Zombie::Zombie(void) {
}

Zombie::~Zombie(void){
	std::cout << this->name << "is dieing" << std::endl;
}

void Zombie::setZombieNameType(std::string name, std::string type) {
	this->type = type;
	this->name = name;
}

void Zombie::announce(void){
	std::cout << "<" << this->type << "> " << this->name << "...." << std::endl;
}
