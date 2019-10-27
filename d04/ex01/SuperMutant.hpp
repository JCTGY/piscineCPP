/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutan.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 21:52:13 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 22:14:07 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : public Enemy {

	public:
		// Default Canaonoical Class
		SuperMutant();
		SuperMutant(const SuperMutant & copy);
		SuperMutant &operator = (const SuperMutant & inputClass);
		~SuperMutant(void);

		// member function
		void takeDamage(int damage);
};

#endif
