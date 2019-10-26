/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:38:50 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/25 16:29:23 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class FragTrap : public virtual ClapTrap {

	public:
		// Default Canonical Class
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(const FragTrap & copy);
		FragTrap &operator = (const FragTrap & inputClass);
		~FragTrap(void);

		// member function
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

		void lazyAttack(std::string const & target);
		void wowoAttack(std::string const & target);
		void latataAttack(std::string const & target);
		void hahaAttack(std::string const & target);
		void doneAttack(std::string const & target);
};

#endif
