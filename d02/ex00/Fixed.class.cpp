/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:08:29 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/15 13:49:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int _fixBits = 8;

Fixed::Fixed(void) : _fixValue(0) {

	std::cout << "Set fixValue to defaulf" << std::endl;
}

Fixed::Fixed(const Fixed &inputClass) {

	std::cout << "Copy another objec" << std::endl;
	this->_fixValue = inputClass.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &inputClass) {

	if (this == &inputClass)
		return *this;
	std::cout << "Assignment operator procesee" << std::endl;
	this->_fixValue = inputClass.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {

	std::cout << "Deconstrutor is called..." << std::endl;
}

int Fixed::getRawBits(void) const {

	return _fixValue;
}

void Fixed::setRawBits(int const raw) {

	_fixValue = raw;
	std::cout << "Set _fixValue to " << raw << std::endl;
}
