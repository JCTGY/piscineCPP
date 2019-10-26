/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 23:42:24 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 22:06:12 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	return 0;
}
