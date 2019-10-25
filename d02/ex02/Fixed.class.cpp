/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:08:29 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 19:50:02 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fixBits = 8;

// Deflaut Canonicla Class
Fixed::Fixed(void) : _fixValue(0) {

	std::cout << "Set fixValue to defaulf" << std::endl;
}

Fixed::Fixed(const Fixed &inputClass) {

	std::cout << "Copy another objec" << std::endl;
	*this = inputClass;
}

Fixed::~Fixed(void) {

	std::cout << "Deconstrutor is called..." << std::endl;
}

// Fixed::operator overload
Fixed & Fixed::operator = (const Fixed &inputClass) {

	std::cout << "Assignment Fixed::operator procesee" << std::endl;
	this->_fixValue = inputClass.getRawBits();
	return *this;
}

bool Fixed::operator > (const Fixed &inputClass) const { 
	return (_fixValue > inputClass.getRawBits());
}

bool Fixed::operator < (const Fixed &inputClass) const { 
	return (_fixValue < inputClass.getRawBits());
}

bool Fixed::operator >= (const Fixed &inputClass) const { 
	return (_fixValue >= inputClass.getRawBits());
}

bool Fixed::operator <= (const Fixed &inputClass) const { 
	return (_fixValue <= inputClass.getRawBits());
}

bool Fixed::operator == (const Fixed &inputClass) const { 
	return (_fixValue == inputClass.getRawBits());
}

bool Fixed::operator != (const Fixed &inputClass) const { 
	return (_fixValue != inputClass.getRawBits());
}

Fixed Fixed::operator + (const Fixed &inputClass) const {
	return Fixed(this->toFloat() + inputClass.toFloat());
}

Fixed Fixed::operator * (const Fixed &inputClass) const {
	return Fixed(this->toFloat() * inputClass.toFloat());
}

Fixed Fixed::operator - (const Fixed &inputClass) const {
	return Fixed(this->toFloat() - inputClass.toFloat());
}

Fixed Fixed::operator / (const Fixed &inputClass) const {
	return Fixed(this->toFloat() / inputClass.toFloat());
}

Fixed& Fixed::operator ++ (void) {
	_fixValue++;
	return *this;
}

Fixed& Fixed::operator -- (void) {
	_fixValue--;
	return *this;
}

Fixed Fixed::operator ++ (int) {
	return Fixed(_fixValue++);
}

Fixed Fixed::operator -- (int) {
	return Fixed(_fixValue--);
}

// member function
Fixed::Fixed(const int fixValue) : _fixValue(fixValue << _fixBits) {

	std::cout << "Int Construtor" << std::endl;
}

Fixed::Fixed(const float fixValue) : _fixValue(roundf(fixValue * (1 << _fixBits))) {

	std::cout << "Float Constructor" << std::endl;
}

int Fixed::getRawBits(void) const {

	return _fixValue;
}

void Fixed::setRawBits(int const raw) {

	_fixValue = raw;
	std::cout << "Set _fixValue"<< std::endl;
}

float Fixed::toFloat(void) const { 
	
	std::cout << "Return Float" << std::endl;
	return ((float)_fixValue / (1 << _fixBits));
}

int Fixed::toInt(void) const {

	std::cout << "Return Int" << std::endl;
	return (_fixValue >> _fixBits);
}

// non-member function
std::ostream &operator << (std::ostream &out, Fixed const &inputClass) {

	out << inputClass.toFloat();
	return out;
}

Fixed& min(Fixed & A, Fixed & B) {
	return (A < B ? A: B);
}

const Fixed& min(const Fixed & A, const Fixed & B) {
	return (A < B ? A: B);
}

Fixed& max(Fixed & A, Fixed & B) {
	return (A > B ? A: B);
}

const Fixed& max(const Fixed & A, const Fixed & B) {
	return (A > B ? A: B);
}
