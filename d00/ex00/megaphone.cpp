/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:06:54 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/10 20:49:14 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void	big_case(char *str){
	for (int i = 0; str[i]; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		cout << str[i];
	}
}
int		main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i <  argc; i++)
			big_case(argv[i]);
	}
	cout << std::endl;
	return 0;
}
