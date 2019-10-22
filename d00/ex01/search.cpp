/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:44:14 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 14:00:58 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	display_string(std::string temp, size_t precision){

	if (temp.size() > precision){
	   	temp.resize(precision);
		temp += ".";
	}
	std::cout << std::left;
	std::cout << "|" << std::setw(precision + 1) << temp;
}

void	display_index(Contact contact[8], int num_contact){

	const size_t precision = 9;
	std::cout << "|first_name|last_name |login     |nickname  |" << std::endl;
	for (int i = 0; i < num_contact; i++){
		display_string(std::to_string(i), precision);
		std::string temp = contact[i].get_first_name();
		display_string(temp, precision);
		temp = contact[i].get_last_name();
		display_string(temp, precision);
		temp = contact[i].get_login();
		display_string(temp, precision);
		std::cout << "|" <<  std::endl;
	}
}

void	display_contact(Contact contact[8], int num_contact){

	int i;
	std::string temp;
	std::cout << "Please enter the index of the contact:" << std::endl;
	std::getline(std::cin, temp);
	if (temp.empty())
		return ;
	if (temp.length() != 1 || !isdigit(temp[0])){
		std::cout << "invalid index, please check again" << std::endl;
		return ;
	}
	i = std::stoi(temp);
	if (i < num_contact && i >= 0){
		std::cout << "first_name: " << contact[i].get_first_name() << std::endl;
		std::cout << "last_name: " << contact[i].get_last_name() << std::endl;
		std::cout << "nickname: " << contact[i].get_nickname() << std::endl;
		std::cout << "login: " << contact[i].get_login() << std::endl;
		std::cout << "postal_address: " << contact[i].get_postal_address() << std::endl;
		std::cout << "email_address: " << contact[i].get_email_address() << std::endl;
		std::cout << "phone_number: " << contact[i].get_phone_number() << std::endl;
		std::cout << "birthday_date: " << contact[i].get_birthday_date() << std::endl;
		std::cout << "favorite_meal: " << contact[i].get_favorite_meal() << std::endl;
		std::cout << "underwear_color: " << contact[i].get_underwear_color() << std::endl;
		std::cout << "darkest_secret: " << contact[i].get_darkest_secret() << std::endl;
	}
	else {
		std::cout << "index out of bounds" << std::endl;
	}
}
