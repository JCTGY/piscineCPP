/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:45:01 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 14:06:35 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact	add_contact(void){
	std::string str;
	Contact new_contact;
	std::cout << "ADD new contact:\n";
	std::cout << "first_name: ";
	std::getline(std::cin, str);
	new_contact.add_first_name(str);

	std::cout << "last_name: ";
	std::getline(std::cin, str);
	new_contact.add_last_name(str);

	std::cout << "nickname: ";
	std::getline(std::cin, str);
	new_contact.add_nickname(str);

	std::cout << "login: ";
	std::getline(std::cin, str);
	new_contact.add_login(str);

	std::cout << "postal_address: ";
	std::getline(std::cin, str);
	new_contact.add_postal_address(str);

	std::cout << "email_address: ";
	std::getline(std::cin, str);
	new_contact.add_email_address(str);

	std::cout << "phone_number: ";
	std::getline(std::cin, str);
	new_contact.add_phone_number(str);

	std::cout << "birthday_date: ";
	std::getline(std::cin, str);
	new_contact.add_birthday_date(str);

	std::cout << "favorite_meal: ";
	std::getline(std::cin, str);
	new_contact.add_favorite_meal(str);

	std::cout << "underwear_color: ";
	std::getline(std::cin, str);
	new_contact.add_underwear_color(str);

	std::cout << "darkest_secret: ";
	std::getline(std::cin, str);
	new_contact.add_darkest_secret(str);
	std::cout << "new contact is added\n";
	return (new_contact);
}
