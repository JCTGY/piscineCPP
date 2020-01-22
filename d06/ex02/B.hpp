/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:18:32 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 12:18:56 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

class B : public Base
{
	public:
		B(void);
		B(const B & copy);
		B &operator = (const B & inputClass);
		~B(void);
};

#endif
