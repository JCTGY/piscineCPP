/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:13:17 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 20:32:02 by jchiang-         ###   ########.fr       */
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
		Fixed(void);
		Fixed(const Fixed &old);
		Fixed(const int fixValue);
		Fixed(const float fixValue);
		Fixed & operator = (const Fixed &old);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, Fixed const &old);

#endif			
