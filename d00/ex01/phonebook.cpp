/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:24:02 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/13 10:55:24 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	display_header(void){
	std::string line;
	std::ifstream header("header");
	if (header.is_open()){
		while (std::getline(header, line)){
			std::cout << line << std::endl;
		}
		header.close();
		std::cout << "Welcome to phonebook >> usage above\n";
	}
	else
		std::cout << "cannot open header" << std::endl;

}

int     main(void){

	int b = 1;
	size_t num_contact = 0;
	Contact contact[8];
	std::string str;
	display_header();
	while (b){
		std::cout << "phonebook > ";
		std::getline(std::cin, str);
		if (!str.compare("ADD")){
			if (num_contact < 8)
				contact[num_contact++] = add_contact();
			else
				std::cout << "Sorry, Contact is full\n";
		}
		else if (!str.compare("SEARCH")){
			display_index(contact, num_contact);
			display_contact(contact, num_contact);
		}
		else if (!str.compare("EXIT")){
			std::cout << "GoodBye~ See You Next Time\n";
			return 0;
		}
		else {
			std::cout << "invalid input\n";
			std::cout << "usage:\n\t**ADD\n\t**SEARCH\n\t**EXIT\n";
		}
	}
    return 0;
}
