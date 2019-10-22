/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:54:35 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/21 22:46:54 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{
	private:
		std::string zombieNmae;
		Zombie *arrayZombies;
	public:
		ZombieHorde(int numZombies);
		~ZombieHorde(void);
		std::string randomNames(int index);
};

#endif
