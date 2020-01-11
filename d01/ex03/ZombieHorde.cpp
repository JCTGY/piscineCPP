/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:59:43 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 22:47:20 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <ctime>
#include <cstdlib>
#include <random>

ZombieHorde::ZombieHorde(int numZombies) {
	arrayZombies = new Zombie[numZombies]();
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(0, 1000);
	for (int i = 0; i < numZombies; i++) {
		arrayZombies[i].setZombieNameType(randomNames(uid(gen)), "LakataGa");
		arrayZombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] arrayZombies;
}

std::string ZombieHorde::randomNames(int index) {

	std::string arrayNames[6] = {"wowa", "cota", "zinda", "baga", "lota", "kala"};
	return arrayNames[index % 6];
}

