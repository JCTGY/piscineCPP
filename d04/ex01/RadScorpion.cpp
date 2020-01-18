/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:16:57 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:47:26 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy("RadScorpion" , 80) {
		std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & copy) {

	*this = copy;
}

RadScorpion &RadScorpion::operator = (const RadScorpion & inputClass) {

	if (this == &inputClass)
		return *this;
	Enemy::operator = (inputClass);
	return *this;
}

RadScorpion::~RadScorpion(void) {

	std::cout << "* SPROTCH *" << std::endl;
}
