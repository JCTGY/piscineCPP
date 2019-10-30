/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:05:04 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 20:41:02 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeSign;
		const int _gradeExcute;
		const static int _maxGrade;
		const static int _minGrade;
	
	public:
		// Default colpien format
		Form(void);
		Form(std::string const name, const int gradeSign, const int gradeExcute);
		Form(const Form & copy);
		~Form(void);
		Form &operator = (const Form & inputClass);
		
		// Get funntion
		std::string getName(void) const;
		bool getIsSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExcute(void) const;

		// member function
		void beSigned(Bureaucrat & bureaucrat);

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

std::ostream &operator << (std::ostream &output, Form const &inputClass);

#endif
