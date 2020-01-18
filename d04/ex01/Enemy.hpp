/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:19:55 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/18 09:58:03 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {

	private:
		std::string _type;
		int _hitPoint;
	public:
		// Default Canaonoical Class
		Enemy(void);
		Enemy(std::string type, int hitPoint);
		Enemy(const Enemy & copy);
		Enemy &operator = (const Enemy & inputClass);
		virtual ~Enemy(void);
		
		//Get function
		std::string getType(void) const;
		int getHitPoint(void) const;

		//member function
		virtual void takeDamage(int damage);
};

#endif
