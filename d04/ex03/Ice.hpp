/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:25 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/15 20:09:12 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice & copy);
		Ice &operator = (const Ice & inputClass);
		~Ice(void);

		AMateria * clone(void) const;
		void use(ICharacter & targer);
};

#endif
