/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:13:17 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 09:55:21 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int _fixValue;
		const static int _fixBits;
	public:
		// Default Canonical Class
		Fixed(void);
		Fixed(const Fixed &inputClass);
		~Fixed(void);

		// Operator overload
		Fixed & operator = (const Fixed &inputClass);
		
		bool operator > (const Fixed &inputClass) const;
		bool operator < (const Fixed &inputClass) const;
		bool operator >= (const Fixed &inputClass) const;
		bool operator <= (const Fixed &inputClass) const;
		bool operator == (const Fixed &inputClass) const;
		bool operator != (const Fixed &inputClass) const;
		
		Fixed operator + (const Fixed &inputClass) const;
		Fixed operator * (const Fixed &inputClass) const;
		Fixed operator - (const Fixed &inputClass) const;
		Fixed operator / (const Fixed &inputClass) const;

		Fixed& operator ++ (void);
		Fixed operator ++ (int);
		Fixed& operator -- (void);
		Fixed operator -- (int);
		// member function
		Fixed(const int fixValue);
		Fixed(const float fixValue);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

// non-member function
std::ostream &operator << (std::ostream &out, Fixed const &inputClass);

Fixed& min(Fixed & A, Fixed & B);
const Fixed& min(const Fixed & A, const Fixed & B);
Fixed& max(Fixed & A, Fixed & B);
const Fixed& max(const Fixed & A, const Fixed & B);

#endif			
