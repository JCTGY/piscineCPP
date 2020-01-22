/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:17:29 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 20:58:43 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", "", 25, 5) { }
PresidentialPardonForm::PresidentialPardonForm(std::string targetPath) :
	Form("PresidentialPardonForm", targetPath, 25, 5) { }
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
: Form(copy.getName(), copy.getTargetPath(), copy.getGradeSign(), copy.getGradeExcute()) { }
PresidentialPardonForm::~PresidentialPardonForm(void) { }
PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm & inputClass) {
	if (this != &inputClass)
		*this = inputClass;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned()) {
		if (executor.getGrade() <= this->getGradeExcute())
			std::cout << this->getTargetPath() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw NotSignException();
}
