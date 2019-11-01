/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 14:49:04 by jchiang-          #+#    #+#             */
/*   Updated: 2019/11/01 16:45:13 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iterator>

class Span {

	private:
		unsigned int _N;
		std::vector<int> _vectorInt;
	
	public:
		// Default copien form
		Span(void);
		Span(unsigned int numInt);
		Span(const Span& copy);
		~Span(void);
		Span &operator = (const Span & input);

		// Get function
		unsigned int getNumInt(void) const ;

		// member function
		void addNumber(int numToAdd);
		void addStackNumbers(std::vector<int> & rangeNumToAdd);
		unsigned long int shortestSpan(void);
		unsigned long int longestSpan(void);
};

#endif
