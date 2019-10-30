/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:15:16 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:15:40 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", "", 1, 1) { }
RobotomyRequestForm::RobotomyRequestForm(std::string targetPath) :
	Form("RobotomyRequestForm", targetPath, 145, 137) { }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
: Form(copy.getName(), copy.getTargetPath(), copy.getGradeSign(), copy.getGradeExcute()) { }
RobotomyRequestForm::~RobotomyRequestForm(void) { }
RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm & inputClass) {
	if (this != &inputClass)
		*this = inputClass;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (this->getIsSigned()) {
		if (executor.getGrade() <= 145) {

			std::string filePath = this->getTargetPath();
			filePath += "/ShrubberyCreation";
			std::ofstream output(filePath);
			if (output.fail() || !output.is_open()){
				std::cout << "outpu file faile" << std::endl;
			} else {
			std::cout << "RobotomyRequestForm Tree" << std::endl;
			output.close();
			}
		} else {
			throw GradeTooLowException();
		}
	} else {
		throw NotSignException();
	}
}
