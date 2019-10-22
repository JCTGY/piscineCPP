/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:01:22 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/22 08:33:33 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <random>

std::string randomName(void){

	std::string arrayTypes[5] = {"Monster", "Badshit", "Lovely", "Cute", "Crazy"};
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(0, 1000);
	int index = uid(gen) % 5;
	return arrayTypes[index];
}

int main(void) {

	ZombieEvent zombieManager = ZombieEvent();
	Zombie *zombie = new Zombie("hello", "wowo");
	delete zombie;
	zombieManager.setZombieType("cutp");
	zombieManager.randomChump(randomName());
	return 0;
}
