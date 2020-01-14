/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:22:04 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 14:34:25 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _squadArmy(NULL) { }
Squad::Squad(const Squad & copy) { *this = copy; }
Squad & Squad::operator = (const Squad & inputClass) {
	if (this == &inputClass)
		return *this;
	this->_squadArmy = inputClass._squadArmy;
	return *this;
}
Squad::~Squad(void) {
	delete this->_squadArmy->first;
	this->_squadArmy->last = NULL;
}

int Squad::getCount(void) const { return _squadArmy->num; }
ISpaceMarine *Squad::getUnit(int index) const {
	if (index >= this->_squadArmy->num)
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
	t_node *n = new t_node;
	n->marine = marine;
	n->next = NULL;
	if (!this->_squadArmy->first) {
		this->_squadArmy->first = n;
		this->_squadArmy->last = n;
	} else {
		this->_squadArmy->last->next = n;
		this->_squadArmy->last = n;
	}
	this->_squadArmy->num++;
	return this->_squadArmy->num;
}
