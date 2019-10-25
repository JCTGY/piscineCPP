/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvalExp.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:53:02 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 20:15:15 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EvalExp.hpp"
#include <string>
#include <stdlib.h>

static void passSapce(char **pos) {

	while (**pos && **pos == ' ') {
		(*pos)++;
	}
}

static float getNumber(char **pos) {

	float inputFloat = 0.0f;
	if (isdigit(**pos) || **pos == '.') {
		inputFloat = std::atof(*pos);
	}
	while ((isdigit(**pos) || **pos == '.') && **pos)
		(*pos)++;
	return inputFloat;
}

int inputChecker(char *pos) {

	int bracket = 0;
	while (*pos) {
		if (!isdigit(*pos) && *pos != '+' && *pos != '-' && *pos != '/'
				&& *pos != '*' && *pos != ' ' && *pos != '.' && *pos != '(' && *pos != ')')
			return 0;
		if (*pos == '(')
			bracket++;
		if (*pos == ')')
			bracket--;
		pos++;
	}
	if (bracket) { return 0; }
	return 1;
}

Fixed parseBracket(char **pos) {

	Fixed A = 0;
	if (isdigit(**pos) || **pos == '-') {
		A = Fixed(getNumber(pos));
		passSapce(pos);
	} else if (**pos == '(') {
		(*pos)++;
		A = parseSum(pos);
		if (**pos == ')') {
			(*pos)++;
			passSapce(pos);
		}
	}
	return A;
}

Fixed parseProduct(char **pos) {

	Fixed A = parseBracket(pos);
	while (**pos == '*' || **pos == '/') {
		char opChar = **pos;
		(*pos)++;
		passSapce(pos);
		Fixed B = parseBracket(pos);
		if (opChar == '*') {
			A = A * B;
		} else if (opChar == '/') {
			A = A / B;
		}
	}
	return A;
}

Fixed parseSum(char **pos) {

	passSapce(pos);
	Fixed A = parseProduct(pos);
	while (**pos == '+' || **pos == '-') {
		char opChar = **pos;
		(*pos)++;
		passSapce(pos);
		Fixed B = parseProduct(pos);
		if (opChar == '-') {
			A = A - B;
		} else if (opChar == '+') {
			A = A + B;
		}
	}
	passSapce(pos);
	return A;
}
