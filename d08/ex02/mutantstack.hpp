/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:21:52 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/23 21:25:15 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack(void) { }
		MutantStack(const MutantStack & copy) { *this = copy; }
		~MutantStack(void) { }
		MutantStack &operator = (const MutantStack & input) {
			if (this != &input)
				//calling base class assignment operator function
                // using derived class 
				std::stack<T>::operator = (input);
			return input;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return std::begin(std::stack<T>::c); }
		iterator end() { return std::end(std::stack<T>::c); }
};


#endif
