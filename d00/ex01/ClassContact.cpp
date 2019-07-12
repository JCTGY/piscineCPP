/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:23:39 by jchiang-          #+#    #+#             */
/*   Updated: 2019/07/12 09:29:19 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact(void){
    return ;
};

Contact::~Contact(void){
    return ;
};

void    Contact::add_first_name(std::string str){
    first_name = str;
};


void    Contact::add_last_name(std::string str){
    last_name = str;
};

void    Contact::add_nickname(std::string str){
    nickname = str;
};

void    Contact::add_login(std::string str){
    login = str;
};

void    Contact::add_postal_address(std::string str){
    postal_address = str;
};

void    Contact::add_phone_number(std::string str){
    phone_number = str;
};

void    Contact::add_birthday_date(std::string str){
    birthday_date = str;
};

void    Contact::add_favorite_meal(std::string str){
    favorite_meal = str;
};

void    Contact::add_underwear_color(std::string str){
    underwear_color = str;
};

void    Contact::add_darkest_secret(std::string str){
    darkest_secret = str;
};

std::string     Contact::get_first_name(void){
    return this->first_name;
};

std::string     Contact::get_last_name(void){
    return this->last_name;
};

std::string     Contact::get_nickname(void){
    return this->nickname;
};

std::string     Contact::get_login(void){
    return this->login;
};

std::string     Contact::get_postal_address(void){
    return this->postal_address;
};

std::string     Contact::get_email_address(void){
    return this->email_address;
};

std::string     Contact::get_phone_number(void){
    return this->phone_number;
};

std::string     Contact::get_birthday_date(void){
    return this->birthday_date;
};

std::string     Contact::get_underwear_color(void){
    return this->underwear_color;
};

std::string     Contact::get_darkest_secret(void){
    return this->darkest_secret;
};
