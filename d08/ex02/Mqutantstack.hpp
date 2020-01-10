/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:21:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/11/01 23:41:23 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <stack>


template <typename T>
class Mutantstack : public std::statck<T> {

	Mutantstack(void) { }
	Mutantstack(const Mutantstack & copy) { *this = copy; }
	~Mutantstack(void) { }
	Mutantstack &operator = (const Mutantstack & input) {
		if (this != &input)
			*this = input;
		return input;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return std::begin(std::stack<T>::c; }
	iterator end() { return std::begin(std::stack<T>::c; }
};


#endif
