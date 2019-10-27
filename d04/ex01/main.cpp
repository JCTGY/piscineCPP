/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:48:21 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 23:28:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	PlasmaRifle tam = PlasmaRifle("pad", 20, 35);
	std::cout << "Name: " << tam.getName() << std::endl;
	std::cout << "Name: " << tam.getDamagePoint() << std::endl;
	std::cout << "Name: " << tam.getActionCost() << std::endl;
	tam.attack();

	std::cout << "---------------------------------------------------------" << std::endl;
	PowerFist gam = PowerFist("dgo", 20, 35);
	std::cout << "Name: " << gam.getName() << std::endl;
	std::cout << "Name: " << gam.getDamagePoint() << std::endl;
	std::cout << "Name: " << gam.getActionCost() << std::endl;
	gam.attack();
	
	std::cout << "---------------------------------------------------------" << std::endl;
	SuperMutant eam = SuperMutant();
	std::cout << "Type: " << eam.getType() << std::endl;
	std::cout << "hitPoint: " << eam.getHitPoint() << std::endl;
	eam.takeDamage(20);

	std::cout << "---------------------------------------------------------" << std::endl;
	RadScorpion eac = RadScorpion();
	std::cout << "Type: " << eac.getType() << std::endl;
	std::cout << "hitPoint: " << eac.getHitPoint() << std::endl;
	eac.takeDamage(20);


	std::cout << "---------------------------------------------------------" << std::endl;
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << "---------------------------------------------------------" << std::endl;
	return 0;
}
