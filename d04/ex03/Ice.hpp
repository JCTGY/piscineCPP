/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:25 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 11:07:07 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(const Ice & copy);
		Ice &operator = (const Ice & inputClass);
		~Ice(void);

		AMateria * clone(void) const;
		void use(ICharacter & targer);
};

#endif
