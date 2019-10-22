/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:51:49 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 19:02:46 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name){
	this->type = type;
	this->name = name;
	this->announce();
	std::cout << this->name << "is comming" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->name << "is dieing" << std::endl;
}

void Zombie::announce(void){
	std::cout << "<" << this->type << "> " << this->name << "...." << std::endl;
}
