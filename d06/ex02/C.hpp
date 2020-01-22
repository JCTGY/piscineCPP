/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:19:33 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/22 12:20:00 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

class C : public Base
{
	public:
		C(void);
		C(const C & copy);
		C &operator = (const C & inputClass);
		~C(void);
};

#endif
