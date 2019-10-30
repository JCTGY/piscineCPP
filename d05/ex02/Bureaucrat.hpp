/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:52:22 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 22:22:16 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {

	private:
		static const int _maxGrade;
		static const int _minGrade;
		const std::string _name;
		int _grade;
	
	public:
		// Default colpien format
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & copy);
		Bureaucrat &operator = (const Bureaucrat & inputClass);

		// Get funntion
		std::string getName(void) const;
		int getGrade(void) const;

		// member function
		void increatmentGrade(void);
		void decreatmentGrade(void);
		void signForm(Form &form);
		void executeForm(Form const & form);

		// nested class
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException & copy);
				~GradeTooHighException(void) throw();
				GradeTooHighException &operator = (const GradeTooHighException & inputClass);

				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException & copy);
				~GradeTooLowException(void) throw();
				GradeTooLowException &operator = (const GradeTooLowException & inputClass);

				virtual const char * what() const throw();
		};
};

std::ostream &operator << (std::ostream &output, Bureaucrat const &inputClass);  

#endif



