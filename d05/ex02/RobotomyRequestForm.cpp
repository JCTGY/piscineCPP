/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:15:16 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:26:58 by jchiang-         ###   ########.fr       */
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
			filePath += "/RobotomyRequestForm";
			std::ofstream output(filePath);
			if (output.fail() || !output.is_open()){
				std::cout << "outpu file faile" << std::endl;
			} else {
						output << "       |    | " << std::endl
	   			<< "	T/ / T||/  /_/___/_" << std::endl
 << "       TT   |/ T/"<< std::endl
  << " _T__T_T   |  /_____/_"<< std::endl
  << "        T  | /          /"<< std::endl
 << "__ _-----`  |{,-----------~"<< std::endl
 <<  "         T }{"<< std::endl
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
