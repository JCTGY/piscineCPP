/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:30:19 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 19:51:19 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int main( void ) { 
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max( a, b ) << std::endl;

  	Fixed c(3);
 	Fixed d(1);

  	std::cout << " c added d == " << c + d << std::endl;
  	std::cout << " c minus d == " <<  c - d << std::endl;
  
	std::cout << c-a << std::endl;
	std::cout << c/a << std::endl;
	std::cout << c*a << std::endl;
	std::cout << c+a << std::endl;
	return 0; 
}
