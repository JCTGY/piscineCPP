/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:46:13 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 21:37:29 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {

	private:
		std::string _name;
	protected:
		Victim(void);
	public:
		// Default Cannonical Class
		Victim(std::string name);
		Victim(const Victim & copy);
		Victim &operator = (const Victim & inputClass);
		virtual ~Victim(void);

		// Get function
		std::string getName(void) const;
		
		// member function
		virtual void getPolymorphed(void) const; 
};

// non-member function
std::ostream &operator << (std::ostream &output, Victim const & inputClass);

#endif

