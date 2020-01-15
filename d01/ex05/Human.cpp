/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:48:16 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 20:04:35 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <sstream>
#include <iostream>
#include <string>

Human::Human(void) {

	std::cout << "Human is coming" << std::endl;
	_brain = Brain();
	return ;
}

Human::~Human(void) {

	std::cout << "Human is dead" << std::endl;
	return ;
}

Brain & Human::getBrain(void) {

	return _brain;
}

std::string Human::identify(void) {
	return this->_brain.identify();	
}
