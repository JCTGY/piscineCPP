/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:13:53 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:15:10 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class RobotomyRequestForm: public Form {

	private:
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string targetPath);
		RobotomyRequestForm(const RobotomyRequestForm & copy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator = (const RobotomyRequestForm & inputClass);

		void execute(Bureaucrat const & executor) const;
};

#endif
