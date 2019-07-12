/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:46:20 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/11 11:12:25 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
#define CLASS_CONTACT_H

# include <string>
# include <iostream>

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
		void add_first_name(void);
		void add_last_name(void);
		void add_nickname(void);
		void add_login(void);
		void add_postal_address(void);
		void add_email_address(void);
		void add_phone_number(void);
		void add_birthday_date(void);
		void add_favorite_meal(void);
		void add_underwear_color(void);
		void add_darkest_secret(void);
		std::string add_first_name(void);
		std::string add_last_name(void);
		std::string add_nickname(void);
		std::string add_login(void);
		std::string add_postal_address(void);
		std::string add_email_address(void);
		std::string add_phone_number(void);
		std::string add_birthday_date(void);
		std::string add_favorite_meal(void);
		std::string add_underwear_color(void);
		std::string add_darkest_secret(void);
}

