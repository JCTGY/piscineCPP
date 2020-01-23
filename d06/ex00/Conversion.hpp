/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:43:28 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 21:26:01 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <stdexcept>
//#include <limit.h>

class Conversion {

	private:
		std::string _input;
		double _inputDouble;
	public:
		// Default copein format
		Conversion(void);
		Conversion(std::string input);
		Conversion(const Conversion & copy);
		~Conversion(void);
		Conversion &operator = (const Conversion & inputClass);

		// Get function
		std::string getInput(void) const;

		// member function
		void doConversion(void);
		void stringToChar(void);
		void stringToInt(void);
		void stringToFloat(void);
		void stringToDouble(void);

};

#endif
