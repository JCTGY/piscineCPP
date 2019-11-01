/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:48:07 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/31 20:01:27 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T,  typename F>
void iter(T *a, size_t arrayLen,  F func) {

	for (size_t i = 0; i < arrayLen; i++) {
		func(a[i]);
	}
}

template <typename A>
void doSomething(A &a) {

	std::cout << "output is: " << a << std::endl;
//	a++;
}
	

int main(void)
{
	std::cout << "-------------------int------------------------" << std::endl;
	int arrayInt[] = { 1, 2, 3, 4, 5 , 6, 7, 8 };
	iter<int>(arrayInt, sizeof(arrayInt)/sizeof(*arrayInt) , doSomething<int>);

	std::cout << "-------------------float------------------------" << std::endl;
	float arrayFloat[] = { 3.2, 4.25, 3.33, 7.812, 23.0, 642.0, 42.42, 623.3 };
	iter<float>(arrayFloat, sizeof(arrayFloat)/sizeof(*arrayFloat) , doSomething<float>);
	
	std::cout << "-------------------char-------------------------" << std::endl;
	char arrayChar[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	iter<char>(arrayChar, sizeof(arrayChar)/sizeof(*arrayChar) , doSomething<char>);
	
	std::cout << "-------------------string-------------------------" << std::endl;
	std::string arrayString[] = { "start", "error", "test", "String type", "Hello", "Wolata" };
	iter<std::string>(arrayString, sizeof(arrayString)/sizeof(*arrayString) , doSomething<std::string>);
	
	return 0;
}
