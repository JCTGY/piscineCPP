/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 23:42:24 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 22:07:44 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
	FragTrap Bob = FragTrap("Bob");

	std::cout << "KKCT89 " << Bob.getName() << std::endl;
	std::cout << "KKCT89 " << Bob.getHitPoint() << std::endl;
	std::cout << "KKCT89 " << Bob.getMaxHitPoint() << std::endl;
	std::cout << "KKCT89 " << Bob.getEnergy() << std::endl;
	std::cout << "KKCT89 " << Bob.getMaxEnergy() << std::endl;
	std::cout << "KKCT89 " << Bob.getLevel() << std::endl;
	std::cout << "KKCT89 " << Bob.getMeleeAttack() << std::endl;
	std::cout << "KKCT89 " << Bob.getRangeAttack() << std::endl;
	std::cout << "KKCT89 " << Bob.getArmorReduction() << std::endl;
	Bob.meleeAttack("slime");
	Bob.rangedAttack("slime");
	Bob.vaulthunter_dot_exe("skag");
	Bob.beRepaired(99);
	Bob.takeDamage(30);
	Bob.beRepaired(99);
	Bob.vaulthunter_dot_exe("skag");
	Bob.vaulthunter_dot_exe("skag");
	Bob.vaulthunter_dot_exe("skag");
	Bob.vaulthunter_dot_exe("skag");
	std::cout << "------------------------------------------------" << std::endl;

	ScavTrap Dob = ScavTrap("lol");

	std::cout << "KKCT89 " << Dob.getName() << std::endl;
	std::cout << "KKCT89 " << Dob.getHitPoint() << std::endl;
	std::cout << "KKCT89 " << Dob.getMaxHitPoint() << std::endl;
	std::cout << "KKCT89 " << Dob.getEnergy() << std::endl;
	std::cout << "KKCT89 " << Dob.getMaxEnergy() << std::endl;
	std::cout << "KKCT89 " << Dob.getLevel() << std::endl;
	std::cout << "KKCT89 " << Dob.getMeleeAttack() << std::endl;
	std::cout << "KKCT89 " << Dob.getRangeAttack() << std::endl;
	std::cout << "KKCT89 " << Dob.getArmorReduction() << std::endl;
	Dob.meleeAttack("slime");
	Dob.rangedAttack("slime");
	Dob.challengeNewcomer("skag");
	Dob.beRepaired(99);
	Dob.takeDamage(30);
	Dob.beRepaired(99);
	Dob.challengeNewcomer("skag");
	Dob.challengeNewcomer("skag");
	Dob.challengeNewcomer("skag");
	Dob.challengeNewcomer("skag");
	return 0;
}
