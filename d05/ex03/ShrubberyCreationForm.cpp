/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:52:32 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 21:40:25 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", "", 1, 1) { }
ShrubberyCreationForm::ShrubberyCreationForm(std::string targetPath) : 
	Form("ShrubberyCreationForm", targetPath, 145, 137) { }
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) 
: Form(copy.getName(), copy.getTargetPath(), copy.getGradeSign(), copy.getGradeExcute()) { }
ShrubberyCreationForm::~ShrubberyCreationForm(void) { }
ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm & inputClass) {
	if (this != &inputClass)
		*this = inputClass;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->getIsSigned()) {
		if (executor.getGrade() <= 145) {

			std::string filePath = this->getTargetPath();
			filePath += "/ShrubberyCreation";
			std::ofstream output(filePath);
			if (output.fail() || !output.is_open()){
				std::cout << "outpu file faile" << std::endl;
			} else {
				output
				<< "				.        +          .      .          .   " << std::endl  
				<< "     .            _        .                    .         " << std::endl  
				<< "  ,              /;-._,-.____        ,-----.__            " << std::endl 
				<< " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,        " << std::endl 
				<< "  `                 \\   _|`=:_::.`.);  \\ __/ /          " << std::endl 
				<< "                      ,    `./  \\:. `.   )==-'  .        " << std::endl 
				<< "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .   " << std::endl 
				<< ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o           " << std::endl 
				<< "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .     " << std::endl 
				<< "  .      ,=':  \\    ` `/` ' , , ,:' `'--.-----._/`7      " << std::endl 
				<< "   `.   (    \\: \\,-._` ` + '\\, ,   _,--._,---:.__/     " << std::endl 
				<< "              \\:  `  X` _| _,\\/'   .-'                  " << std::endl 
				<< ".                :._:`\\____  /:'  /      .           .   " << std::endl  
				<< "                    \\::.  :\\/:'  /              +       " << std::endl  
				<< "   .                 `.:.  /:'  }      .                  " << std::endl  
				<< "           .           ):_(:;   \\           .            " << std::endl   
				<< "                      /:. _/ ,  |                         " << std::endl   
				<< "                   . (|::.     ,`                  .      " << std::endl   
				<< "     .                |::.    {\\                         " << std::endl  
				<< "                      |::.\\  \\ `.                       " << std::endl   
				<< "                      |:::(\\    |                        " << std::endl   
				<< "              O       |:::/{ }  |                  (o     " << std::endl  
				<< "               )  ___/#\\::`/ (O ==._____   O, (O  /`     " << std::endl  
				<< "          ~~~w/w~~~,\\` `:/,-(~`~~~~~~~~~o~\\~/~w|/~      " << std::endl     
				<< "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~        " << std::endl;
			output.close();
			}
		} else {
			throw GradeTooLowException();
		}
	} else {
		throw NotSignException();
	}
}

