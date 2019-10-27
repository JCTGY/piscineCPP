/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:35:11 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:55:28 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {

	protected:
		Peon(void);
	
	public:
		// Default Cannonical Class
		Peon(std::string name);
		Peon(const Peon & copy);
		Peon &operator = (const Peon & inputClass);
		~Peon(void);

		// member function
		void getPolymorphed(void) const;
};

#endif
