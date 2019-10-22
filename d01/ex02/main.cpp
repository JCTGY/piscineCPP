/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:01:22 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 19:13:02 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>
#include <cstdlib>

std::string randomName(void){

	std::string arrayTypes[5] = {"Monster", "Badshit", "Lovely", "Cute", "Crazy"};
	srand(time(0));
	int index = rand() % 5;
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
