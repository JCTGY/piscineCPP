/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 23:42:24 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 13:10:27 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	return 0;
}
