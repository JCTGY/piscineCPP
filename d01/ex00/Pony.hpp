/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:32:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 16:04:38 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony 
{
	private:
		std::string ponyName;
		std::string isPony;
	
	public:
		Pony(void);
		~Pony(void);
		void addPonyName(std::string str);
		void addIsPony(void);
		std::string getPonyName(void);
		std::string getIsPony(void);
};

#endif
