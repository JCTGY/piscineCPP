
#include <ClassContact.hpp>

Contact(void){
    return ;
};

~Contact(void){
    return ;
};

void    add_first_name(std::string str){
    first_name = str;
};


void    add_last_name(std::string str){
    last_name = str;
};

void    add_nickname(std::string str){
    nick_name = str;
};

void    add_login(std::string str){
    login = str;
};

void    add_postal_address(std::string str){
    postal_address = str;
};

void    add_phone_number(std::string str){
    phone_number = str;
};

void    add_birthday_date(std::string str){
    birthday_date = str;
};

void    add_favorite_meal(std::string str){
    favorite_meal = str;
};

void    add_underwear_color(std::string str){
    underwear_color = str;
};

void    add_darkest_secret(std::string str){
    darkest_secret = str;
};

std::string     get_first_name(void){
    return this->first_name;
};

std::string     get_last_name(void){
    return this->last_name;
};

std::string     get_nick_name(void){
    return this->nick_name;
};

std::string     get_login(void){
    return this->login;
};

std::string     get_postal_address(void){
    return this->postal_address;
};

std::string     get_email_address(void){
    return this->email_address;
};

std::string     get_phone_number(void){
    return this->phone_number;
};

std::string     get_birthday_date(void){
    return this->birthday_date;
};

std::string     get_underwear_color(void){
    return this->underwaer_color;
};

std::string     get_darkest_secret(void){
    return this->darkest_secret;
};
