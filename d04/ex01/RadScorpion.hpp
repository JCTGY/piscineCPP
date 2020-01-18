/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:15:05 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:47:37 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class RadScorpion : public Enemy {

	public:
		// Default Canaonoical Class
		RadScorpion();
		RadScorpion(const RadScorpion & copy);
		RadScorpion &operator = (const RadScorpion & inputClass);
		~RadScorpion(void);
};

#endif
