/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:46:20 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/13 11:15:59 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <iomanip>
# include <ctype.h>

class	Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
       	Contact(void);
        ~Contact(void);
		void add_first_name(std::string str);
		void add_last_name(std::string str);
		void add_nickname(std::string str);
		void add_login(std::string str);
		void add_postal_address(std::string str);
		void add_email_address(std::string str);
		void add_phone_number(std::string str);
		void add_birthday_date(std::string str);
		void add_favorite_meal(std::string str);
		void add_underwear_color(std::string str);
		void add_darkest_secret(std::string str);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_login(void);
		std::string get_postal_address(void);
		std::string get_email_address(void);
		std::string get_phone_number(void);
		std::string get_birthday_date(void);
		std::string get_favorite_meal(void);
		std::string get_underwear_color(void);
		std::string get_darkest_secret(void);
};

void	display_contact(Contact contact[8], int num_contact);
void	display_index(Contact contact[8], int num_contact);
Contact	add_contact(void);
#endif
