/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputParse.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:55:28 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/24 16:29:39 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXP_HPP
# define EVALEXP_HPP

#include "Fixed.class.hpp"

int inputChecker(char *pos);
Fixed parseBracket(char **pos);
Fixed parseProduct(char **pos);
Fixed parseSum(char **pos);

#endif
