/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:13:46 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/31 15:16:36 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void swap(T & x, T & y) {

	T  tmp;
   	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T max(T const & x, T const & y) {
	return ((x <= y) ? y : x);
}

template <typename T>
const T min(T const & x, T const & y) {
	return ((x > y) ? y : x);
}

int main(void)
{
	float c = 21.21;
	float d = 42.42;

	std::cout << "---------------------------Swap test-----------------" << std::endl;
	std::cout << "Ori a: " << c << std::endl;
	std::cout << "Ori b: " << d << std::endl;
	swap(c, d);
	std::cout << "Swap a: " << c << std::endl;
	std::cout << "Swap b: " << d << std::endl;

	std::cout << "---------------------------Min test-----------------" << std::endl;
	std::cout << "Min a, b: " << min(c, d) << std::endl;
	
	std::cout << "---------------------------Max test-----------------" << std::endl;
	std::cout << "Max a, b: " << max(c, d) << std::endl;

	
	std::cout << "====================================================" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string e = "chaine1";
	std::string f = "chaine2";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
}
