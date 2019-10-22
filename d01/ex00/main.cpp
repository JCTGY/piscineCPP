/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:49:57 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 16:12:38 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnHeap(void)
{
	Pony *pony = new Pony();
	pony->addPonyName("heapPony");
	pony->addIsPony();
	std::cout << "ponyName" << pony->getPonyName() << std::endl;
	std::cout << pony->getIsPony() << std::endl;
	
	delete pony;
}

void ponyOnStack(void)
{
	Pony pony = Pony();
	pony.addPonyName("stackPony");
	pony.addIsPony();
	std::cout << "ponyName" << pony.getPonyName() << std::endl;
	std::cout << pony.getIsPony() << std::endl;
}

int main(void)
{
	ponyOnHeap();
	ponyOnStack();
	return 0;
}
