/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:05:12 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/13 21:10:05 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		// Default Canonoical Class
		PowerFist(void);
		PowerFist(const PowerFist & copy);
		PowerFist &operator = (const PowerFist &inputClass);
		~PowerFist(void);

		// member function
		void attack(void) const;

};

#endif
