/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 11:36:53 by jchiang-          #+#    #+#             */
/*   Updated: 2019/11/01 14:16:09 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors

template <typename T>
int easyfind(T & container, int match) {

	typename T::iterator findIt = std::find(container.begin(), container.end(), match);
	if (findIt == container.end())
		throw(std::exception());
	return *findIt;
}

#endif
