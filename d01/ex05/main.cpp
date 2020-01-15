/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:00:45 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 19:24:15 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <string>
#include <iostream>

int main(void) 
{
	Human human = Human();
	std::cout << human.identify() << std::endl;
	std::cout << human.getBrain().identify() << std::endl;
	return 0;
}
