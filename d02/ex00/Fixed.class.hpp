/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:13:17 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 16:33:30 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

	private:
		int _fixValue;
		const static int _fixBits;
	public:
		Fixed(void);
		Fixed(const Fixed &old);
		Fixed & operator = (const Fixed &old);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif			
