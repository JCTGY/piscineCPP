/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:30:19 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 19:00:34 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include "EvalExp.hpp"
#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv) {

	char *inputStr;
  	if (argc == 2) {
		
		inputStr = argv[1];
		if (!inputChecker(inputStr)) {
			std::cout << "Invalid input, Please Check again" << std::endl;
			return -1;
		}
		else {
			Fixed A = parseSum(&inputStr);
			if (*inputStr != '\0') {
				std::cout << "Cananot Parse string" << std::endl;
				exit(EXIT_FAILURE);
			}
			std::cout << A << std::endl;
		}
	} else
		std::cout << "Usage: ./eval_exp \"[Argument for Calculation]\"" << std::endl;
	return 0; 
}
