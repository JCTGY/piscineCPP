/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:17:29 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:17:52 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", "", 1, 1) { }
PresidentialPardonForm::PresidentialPardonForm(std::string targetPath) :
	Form("PresidentialPardonForm", targetPath, 145, 137) { }
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
		if (executor.getGrade() <= 145) {

			std::string filePath = this->getTargetPath();
			filePath += "/ShrubberyCreation";
			std::ofstream output(filePath);
			if (output.fail() || !output.is_open()){
				std::cout << "outpu file faile" << std::endl;
			} else {
			std::cout << "PresidentialPardonForm Tree" << std::endl;
			output.close();
			}
		} else {
			throw GradeTooLowException();
		}
	} else {
		throw NotSignException();
	}
}
