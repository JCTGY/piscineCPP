/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:34:46 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/23 18:59:11 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Default 
Span::Span(void) { }
Span::Span(unsigned int numInt) : _N(numInt) { _vectorInt.reserve(_N); }
Span::Span(const Span & copy) { *this = copy; }
Span::~Span(void) { }
Span &Span::operator = (const Span & input) {

	if (this != &input)
		*this = input;
	return *this;
}

// Get function
unsigned int Span::getNumInt(void) const { return _N; }

// member function
void Span::addNumber(int numToAdd) {
	
	if (_vectorInt.size() == _N)
		throw(std::exception());
	_vectorInt.push_back(numToAdd);
}

void Span::addStackNumbers(std::vector<int> & rangeNumToAdd) {

	if ((_N - _vectorInt.size()) < rangeNumToAdd.size())
		throw(std::exception());
	_vectorInt.insert(_vectorInt.begin(), rangeNumToAdd.begin(), rangeNumToAdd.end());
}

long Span::shortestSpan(void) {

	if (_vectorInt.size() <= 1)
		throw(std::exception());
	long shortes = LONG_MAX;
	long intTmp = 0;
	std::vector<int> copy = this->_vectorInt;
	std::sort(copy.begin(), copy.end());
	intTmp = *copy.begin();
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it) {
		if ((shortes > (static_cast<long>(*it) - intTmp)) && it != copy.begin())
			shortes = (static_cast<long>(*it) - intTmp);
		intTmp = *it;
	}
	return shortes;
}

long Span::longestSpan(void) {

	long maxNum = INT_MIN;
	long minNum = INT_MAX;
	for (std::vector<int>::iterator it = _vectorInt.begin(); it != _vectorInt.end(); ++it) {
		maxNum = (static_cast<long>(*it) > maxNum) ? *it : maxNum;
		minNum = (static_cast<long>(*it) < minNum) ? *it : minNum;
	}
	return (maxNum - minNum);

}
