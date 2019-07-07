/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:06:54 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/07 15:44:19 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	big_case(char *str){
	for (int i = 0; str[i]; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		std::cout << str[i];
	}
}
int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i <  argc; i++)
			big_case(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}
