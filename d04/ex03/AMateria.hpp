/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:30:37 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/16 10:21:56 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	
	public:
		AMateria(std::string const & type);
		~AMateria(void);

		std::string const & getType(void) const;
		unsigned int getXP(void) const;
		void setXP(int xp);

		virtual AMateria * clone(void) const = 0;
		virtual void use(ICharacter & target);
};

#endif
