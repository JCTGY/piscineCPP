/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:08:29 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 20:32:04 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int _fixBits = 8;

Fixed::Fixed(void) : _fixValue(0) {

	std::cout << "Set fixValue to defaulf" << std::endl;
}

Fixed::Fixed(const Fixed &old){

	std::cout << "Copy another objec" << std::endl;
	*this = old;
}

Fixed::Fixed(const int fixValue) {
	
	_fixValue.setRawBits(fixValue << _fixBits);
	std::cout << "Int Construtor" << std::endl;
}

Fixed::Fixed(const float fixValue) { 
	
	_fixValue.setRawBits(fixValue * (1 << _fixBits));
	std::cout << "Float Constructor" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &old) {

	std::cout << "Assignment operator procesee" << std::endl;
	this->_fixValue = old.getRawBits();
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

float Fixed::toFloat(void) const { 
	
	std::cout << "Return Float" << std::endl;
	return ((float)_fixValue / (1 << _fixBits));
}

int Fixed::toInt(void) const {

	std::cout << "Return Int" << std::endl;
	return (_fixValue >> _fixBits);
}

std::ostream &operator << (std::ostream &out, Fixed const &old) {

	out << old.toFloat();
	return out;
}
