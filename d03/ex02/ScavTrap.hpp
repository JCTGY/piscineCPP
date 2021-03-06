/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:15:15 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:24:02 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <random>

class ScavTrap : public ClapTrap {

	public:
		// Default Canonical Class
		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(const ScavTrap & copy);
		ScavTrap &operator = (const ScavTrap & inputClass);
		~ScavTrap(void);

		// member function
		void challengeNewcomer(std::string const & target);
		void lazyChallenge(std::string const & target);
		void wowoChallenge(std::string const & target);
		void latataChallenge(std::string const & target);
		void hahaChallenge(std::string const & target);
		void doneChallenge(std::string const & target);
};

#endif
