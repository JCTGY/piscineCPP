/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:11:23 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 12:17:37 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

class A : public Base
{
	public:
		A(void);
		A(const A & copy);
		A &operator = (const A & inputClass);
		~A(void);
};

#endif
