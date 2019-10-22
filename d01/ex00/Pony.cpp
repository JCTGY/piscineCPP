/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:33:04 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 16:09:00 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void){
	std::cout << "Pony is created" << std::endl;
	return ;
};

Pony::~Pony(void){
	std::cout << "Pony is deleted" <<std::endl;
	return ;
};

void Pony::addPonyName(std::string str){
	ponyName = str;
}

void Pony::addIsPony(void){
	isPony = "A pony is a small horse (Equus ferus caballus). Depending on context, a pony may be a horse that is under an approximate or exact height at the withers or a small horse with a specific conformation and temperament. There are many different breeds.";
}

std::string Pony::getPonyName(void){
	return this->ponyName;
}

std::string Pony::getIsPony(void){
	return this->isPony;
}
