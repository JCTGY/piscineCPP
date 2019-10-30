/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:52:57 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 21:29:16 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat low = Bureaucrat("lowest", 150);
	Bureaucrat high = Bureaucrat("hiest", 1);

	std::cout << low;
	std::cout << high;
	std::cout << "--------------------------------------------------" << std::endl;

	Form form = Form("lota", 1, 1);
	low.signForm(form);
	high.signForm(form);
	Bureaucrat *tooLow;
	try {
		tooLow = new Bureaucrat("tolaoe", 152);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (tooLow != nullptr)
		delete tooLow;
	try {
		tooLow = new Bureaucrat("toohig", -1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	if (tooLow != nullptr)
		delete tooLow;
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

	std::cout << "-----------------------------------------------" << std::endl;
	Form f = Form("loltya", 150, 5);
	std::cout << f << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	Form *formtooformlow = nullptr;
	try {
		formtooformlow = new Form("tolaoe", 152, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	if (formtooformlow != nullptr)
		delete formtooformlow;
	try {
		formtooformlow = new Form("toohig", 10, -1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (formtooformlow != nullptr)
		delete formtooformlow;

	return 0;
}
