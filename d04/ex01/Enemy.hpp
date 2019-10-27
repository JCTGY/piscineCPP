/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:19:55 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/26 23:25:49 by jchiang-         ###   ########.fr       */
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
	
	protected:
		Enemy(void);
	
	public:
		// Default Canaonoical Class
		Enemy(std::string type, int hitPoint);
		Enemy(const Enemy & copy);
		Enemy &operator = (const Enemy & inputClass);
		virtual ~Enemy(void);
		
		//Get function
		std::string getType(void) const;
		int getHitPoint(void) const;

		//member function
		virtual void takeDamage(int damage) = 0;
};

#endif
