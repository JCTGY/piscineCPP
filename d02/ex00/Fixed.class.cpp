/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:08:29 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 08:52:56 by jchiang-         ###   ########.fr       */
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
