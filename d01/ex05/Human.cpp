/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:48:16 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 19:47:00 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <sstream>
#include <iostream>
#include <string>

Human::Human(void) {

	std::cout << "Human is coming" << std::endl;
	brain = new Brain();
	return ;
}

Human::~Human(void) {

	std::cout << "Human is dead" << std::endl;
	delete brain;
	return ;
}

Brain* Human::getBrain(void) {

	return brain;
}

std::string Human::identify(void) {
	
	std::stringstream ss;
	ss << (const void *) this->brain;
	std::string name = ss.str();
	return name;
}
