/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:15:53 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 20:58:45 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class PresidentialPardonForm: public Form {

	private:
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string targetPath);
		PresidentialPardonForm(const PresidentialPardonForm & copy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator = (const PresidentialPardonForm & inputClass);

		void execute(Bureaucrat const & executor) const;
};

#endif
