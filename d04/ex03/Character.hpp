/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:04:59 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 11:21:33 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria _material[4];
	public:
		Character(void);
		Character(std::string name);
		Character(const Ice & copy);
		Character &operator = (const Character & inputClass);
		~Character(void);

		std::string const & getName(void) const;
		void equip(AMateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter  & target);
};

#endif
