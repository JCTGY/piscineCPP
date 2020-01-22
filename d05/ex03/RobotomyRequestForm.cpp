/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:15:16 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 21:17:50 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", "", 72, 45) { }
RobotomyRequestForm::RobotomyRequestForm(std::string targetPath) :
	Form("RobotomyRequestForm", targetPath, 72, 45) { }
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
		if (executor.getGrade() <= this->getGradeExcute()) {
			srand(time(0));
			int possibility = rand() % 100;
			if (possibility < 50)
				std::cout << "Correct: " << this->getTargetPath() << " has been robotomized successfully" << std::endl;
			else
				std::cout << "Wrong: " << this->getTargetPath() << " has been robotomized destroied" << std::endl;
		} else {
			throw GradeTooLowException();
		}
	} else {
		throw NotSignException();
	}
}
