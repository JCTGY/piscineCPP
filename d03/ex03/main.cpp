/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:36:10 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 22:10:36 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

int main(void) 
{
	ClapTrap clap = ClapTrap("lol");
	clap.meleeAttack("lolals");
	std::cout << "----------------------------------------------" << std::endl;

	FragTrap Bob = FragTrap("Bob");
	std::cout << "[FragTrap] " << Bob.getName() << std::endl;
	std::cout << "[FragTrap] " << Bob.getHitPoint() << std::endl;
	std::cout << "[FragTrap] " << Bob.getMaxHitPoint() << std::endl;
	std::cout << "[FragTrap] " << Bob.getEnergy() << std::endl;
	std::cout << "[FragTrap] " << Bob.getMaxEnergy() << std::endl;
	std::cout << "[FragTrap] " << Bob.getLevel() << std::endl;
	std::cout << "[FragTrap] " << Bob.getMeleeAttack() << std::endl;
	std::cout << "[FragTrap] " << Bob.getRangeAttack() << std::endl;
	std::cout << "[FragTrap] " << Bob.getArmorReduction() << std::endl;
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

	std::cout << "[ScavTrap] " << Dob.getName() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getHitPoint() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getMaxHitPoint() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getEnergy() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getMaxEnergy() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getLevel() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getMeleeAttack() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getRangeAttack() << std::endl;
	std::cout << "[ScavTrap] " << Dob.getArmorReduction() << std::endl;
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
	std::cout << "------------------------------------------------" << std::endl;

	NinjaTrap Nob = NinjaTrap("Nin");

	std::cout << "[NinjaTrap] " << Nob.getName() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getHitPoint() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getMaxHitPoint() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getEnergy() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getMaxEnergy() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getLevel() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getMeleeAttack() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getRangeAttack() << std::endl;
	std::cout << "[NinjaTrap] " << Nob.getArmorReduction() << std::endl;
	Nob.meleeAttack("slime");
	Nob.rangedAttack("slime");
	Nob.ninjaShoebox("skag");
	Nob.beRepaired(99);
	Nob.takeDamage(30);
	Nob.beRepaired(99);
	Nob.ninjaShoebox("skag");
	Nob.ninjaShoebox("skag");
	Nob.ninjaShoebox("skag");
	Nob.ninjaShoebox("skag");

	return 0;
}
