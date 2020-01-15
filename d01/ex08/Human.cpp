/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:22:46 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 22:53:51 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {

	std::cout << "Heavy Strike...!!! on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {

	std::cout << "Shooting From the dark to " << target  << std::endl;
}

void Human::intimidatingShout(std::string const & target) {

	std::cout << "Shout with retarded voice... to" << target <<  std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {

	bool attackMatch = false;
	void (Human::*act[3]) (std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	std::string actionNames[4] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout",
	};

	for (int i = 0; i < 3; i++) {
		if (actionNames[i] == action_name) {
			(this->*(act[i]))(target);
			attackMatch = true;
		}
	}

	if (attackMatch == false) {
		std::cout << "Where is ur ATTACK to " << target << "???" << std::endl;
	}
}
