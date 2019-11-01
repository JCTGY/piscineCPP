/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 21:45:14 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/31 17:20:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>

struct Lata {
	int n;
	std::string s2;
	std::string  s1;
};

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void  *serialize(void) {

	Data *data = new Data();
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 100);

	char s1[9];
	char s2[9];
	static const char random[] = "1234567890ABCDEFGHIJKLMNOPQRSTWXYZabcdefghijklmnopqrstwxyz";

	for (int i = 0; i < 8; i++) {
		s1[i] = random[uid(gen) % (sizeof(random) -1)];
		s2[i] = random[uid(gen) % (sizeof(random) -1)];
	}
	s1[8] = '\0'; s2[8] = '\0';
	data->n = uid(gen) % 50;
	data->s1.assign(s1);
	data->s2.assign(s2);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void *raw) {

	return (reinterpret_cast<Data *> (raw));
}

Lata *detry(void *row) {

	return (reinterpret_cast<Lata *> (row));
}
int main(void)
{
	void *serializeData = serialize();
	Data *data = deserialize(serializeData);

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	
	Lata *lata = reinterpret_cast<Lata *>(deserialize(serializeData));

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "s1: " << lata->s1 << std::endl;
	std::cout << "s2: " << lata->s2 << std::endl;
	std::cout << "n: " << lata->n << std::endl;
	return 0;
}
