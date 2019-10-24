/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:28:41 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/23 13:39:54 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human human = Human();
	human.action("meleeAttack", "Nooby");
	human.action("rangedAttack", "Lotak");
	human.action("intimidatingShout", "Zukashi");
	human.action("retardedAttack", "Nobal");

	return 0;
}
