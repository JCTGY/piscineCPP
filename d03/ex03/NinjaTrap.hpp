/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:14:24 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 15:22:36 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class NinjaTrap : public ClapTrap {

	public:
		// Default Canonical Class
		NinjaTrap(void);
		NinjaTrap(std::string const & name);
		NinjaTrap(const NinjaTrap & copy);
		NinjaTrap &operator = (const NinjaTrap & inputClass);
		~NinjaTrap(void);

		// member function
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void ninjaShoebox(std::string const & target);

		void lazyNinja(std::string const & target);
		void wowoNinja(std::string const & target);
		void latataNinja(std::string const & target);
		void hahaNinja(std::string const & target);
		void doneNinja(std::string const & target);
};

#endif
