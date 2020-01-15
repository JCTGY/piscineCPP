/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:38:47 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 20:40:28 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string theString = "HI THIS IS BRAIN";
	std::string *pointer = &theString;
	std::string &refer = theString;

	std::cout << "pointer: " << *pointer << std::endl;
	std::cout << "refer: " << refer << std::endl;

	return 0;
}
