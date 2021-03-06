/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:52:57 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 21:21:05 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat low = Bureaucrat("lowest", 150);
	Bureaucrat high = Bureaucrat("highest", 1);

	std::cout << low;
	std::cout << high;
	std::cout << "--------------------------------------------------" << std::endl;

	try {
		low.decreatmentGrade();
	} catch (std::exception &e) {
		std::cout << "decre" << e.what() << std::endl;
	}

	try {
		high.increatmentGrade();
	} catch (std::exception &e) {
		std::cout << "incre" << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;
	ShrubberyCreationForm sf = ShrubberyCreationForm(".");
	std::cout << sf << std::endl;

	try {
		high.executeForm(sf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(sf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(sf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "--------------------------------------------------" << std::endl;
	RobotomyRequestForm rr = RobotomyRequestForm(".");
	std::cout << rr << std::endl;

	try {
		high.executeForm(rr);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(rr);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(rr);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;
	PresidentialPardonForm pp = PresidentialPardonForm(".");
	std::cout << pp << std::endl;

	try {
		high.executeForm(pp);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(pp);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(pp);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;
	Intern myIntern;
	Form *useIntern = nullptr;
	useIntern = myIntern.makeForm("robotomy request", "lol");
	try {
		high.executeForm(*useIntern);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(*useIntern);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(*useIntern);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
