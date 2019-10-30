/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:38:01 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:06:38 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFROM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm: public Form {

	private:
		ShrubberyCreationForm(void);
	
	public:
		ShrubberyCreationForm(std::string targetPath);
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm & inputClass);

		void execute(Bureaucrat const & executor) const;
};

#endif
