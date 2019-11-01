/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:17:29 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:27:13 by jchiang-         ###   ########.fr       */
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
			filePath += "/PresidentialPardonForm";
			std::ofstream output(filePath);
			if (output.fail() || !output.is_open()){
				std::cout << "outpu file faile" << std::endl;
			} else {
			output  << "       |    | " << std::endl
	   			<< "	x/ / x||/  /_/___/_" << std::endl
 << "       xx   |/ x/"<< std::endl
  << " _x__x_x   |  /_____/_"<< std::endl
  << "        x | /          /"<< std::endl
 << "__ _-----`  |{,-----------~"<< std::endl
 <<  "         x }{"<< std::endl
 << "           }{{"<< std::endl
  << "          }}{"<< std::endl
 << "           {{}"<< std::endl
  << "    , -=-~{ .-^- _"<< std::endl
 <<" ejm        `}"<< std::endl
  << "           {"<< std::endl;
			output.close();
			}
		} else {
			throw GradeTooLowException();
		}
	} else {
		throw NotSignException();
	}
}
