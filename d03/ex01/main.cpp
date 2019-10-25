/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 23:42:24 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 13:27:05 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
	FragTrap Bob = FragTrap("Bob");

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
