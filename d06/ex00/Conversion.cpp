/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:05:31 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 21:44:46 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string input) : _input(input) { }
Conversion::Conversion(const Conversion & copy) { *this = copy; }
Conversion::~Conversion(void) { }
Conversion &Conversion::operator = (const Conversion & inputClass) {

	if (this != &inputClass)
		*this = inputClass;
	return *this;
}

std::string Conversion::getInput(void) const { return _input; }

void Conversion::doConversion(void) {

	if (_input.length() == 1 && !(_input[0] >= '0' && _input[0] <= '9'))
		_inputDouble = static_cast <double> (_input[0]);
	else {
		try {
			_inputDouble = std::stod(_input);
		} catch(std::exception &e) {
			std::cout << "Invalid innput" << std::endl;
			exit(1);
		}
	}
	stringToChar();
	stringToInt();
	stringToFloat();
	stringToDouble();
}


void Conversion::stringToChar(void) {

	std::cout << "char: ";
	if (std::isnan(_inputDouble)) {
		std::cout << "Impossible" << std::endl;
	} else if (!isprint(_inputDouble)) {
		std::cout << "Non displayable" << std::endl;
	} else {
		std::cout << static_cast <char> (_inputDouble) << std::endl;
	}
}

void Conversion::stringToInt(void) {

	std::cout << "int: ";
	if (std::isinf(_inputDouble) || std::isnan(_inputDouble)) {
		std::cout << "Impossible" << std::endl;
	} else {
		std::cout << static_cast <int> (_inputDouble) << std::endl;
	}
}

void Conversion::stringToFloat(void) {

	std::cout << "float: ";
	if (floor(_inputDouble) == _inputDouble && !(std::isinf(_inputDouble))) {
		std::cout << static_cast <float> (_inputDouble) << ".0f" << std::endl;
	} else   {
		std::cout << static_cast <float> (_inputDouble) << "f" << std::endl;
	}
}

void Conversion::stringToDouble(void) {

	std::cout << "double: ";
	if (floor(_inputDouble) == _inputDouble && !(std::isinf(_inputDouble))) {
		std::cout << _inputDouble << ".0" << std::endl;
	} else {
		std::cout << _inputDouble << std::endl;
	}
}
