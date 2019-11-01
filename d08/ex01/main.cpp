/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:39:03 by jchiang-          #+#    #+#             */
/*   Updated: 2019/11/01 16:42:41 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span span = Span(10005);
	std::vector<int> vectorInt;
	vectorInt.reserve(10000);
	for (int i = 0;  i < 10000; i++) {
		vectorInt.push_back(i);
	}
	span.addStackNumbers(vectorInt);

	return 0;;
}
