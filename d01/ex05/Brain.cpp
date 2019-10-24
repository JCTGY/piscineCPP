/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:53:05 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 19:47:46 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain(void) {

	std::cout << "create a brain" << std::endl;
	return ;
}

Brain::~Brain(void) {

	std::cout << "burn the brain" << std::endl;
	return ;
}

std::string Brain::identify(void) {

	std::stringstream ss;
	ss << (const void *)this;
	std::string name = ss.str();
	return name;
}
