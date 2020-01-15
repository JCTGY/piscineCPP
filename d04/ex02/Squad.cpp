/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:22:04 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 19:08:09 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _squadArmy(NULL), _numOfSquad(0) { }
Squad::Squad(const Squad & copy) { *this = copy; }
Squad & Squad::operator = (const Squad & inputClass) {
	if (this == &inputClass)
		return *this;
	this->_squadArmy = inputClass._squadArmy;
	return *this;
}

Squad::~Squad(void) {
	if (_numOfSquad != 0) {
		for (int i = 0; i < _numOfSquad; i++) {
			t_node *tmp = _squadArmy->first;
			_squadArmy->first = tmp->next;
			delete tmp->marine;
			delete tmp;
		}
	}
	this->_squadArmy->last = NULL;
}

int Squad::getCount(void) const { return _numOfSquad; }
ISpaceMarine *Squad::getUnit(int index) const {
	if (index >= _numOfSquad)
		return NULL;
	t_node *tmp = this->_squadArmy->first;
	for (int i = 0; i <= index; i++) {
		if (i == index)
			return tmp->marine;
		tmp = tmp->next;
	}
	return NULL;
}

int Squad::push(ISpaceMarine *marine) {
	if (!marine)
		return _numOfSquad;
	if (!this->_squadArmy)
		this->_squadArmy = new t_squad;
	t_node *n = new t_node;
	n->marine = marine;
	n->next = NULL;
	if (_numOfSquad == 0) {
		this->_squadArmy->first = n;
		this->_squadArmy->last = n;
	} else {
		this->_squadArmy->last->next = n;
		this->_squadArmy->last = n;
	}
	this->_numOfSquad++;
	return _numOfSquad;
}
