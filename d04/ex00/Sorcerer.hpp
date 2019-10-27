/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:41:09 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 16:32:40 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"


class Sorcerer {

	private:
		std::string _name;
		std::string _title;
	public:
		// Default Canonical Class
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & copy);
		Sorcerer &operator = (const Sorcerer & inputClass);
		~Sorcerer(void);

		// Get function
		std::string getName(void) const;
		std::string getTitle(void) const;

		// member function
		void polymorph(Victim const & sadVictim);
};

// non-member function
std::ostream &operator << (std::ostream &output, Sorcerer const & inputClass);

#endif
