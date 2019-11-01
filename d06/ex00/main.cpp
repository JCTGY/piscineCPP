/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:43:27 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/30 20:07:58 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc == 2) {
		Conversion con = Conversion(argv[1]);
		con.doConversion();
	} else {
		std::cout << "Usage: ./Conversion [argument]" << std::endl;
	}
	return 0;
}
