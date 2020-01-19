/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:05:04 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 23:06:03 by jchiang-         ###   ########.fr       */
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
		std::string _targetPath;
		bool _isSigned;
		const int _gradeSign;
		const int _gradeExcute;
		const static int _maxGrade;
		const static int _minGrade;
	
	public:
		// Default colpien format
		Form(void);
		Form(std::string const name, std::string targetPath, const int gradeSign, const int gradeExcute);
		Form(const Form & copy);
		virtual ~Form(void);
		Form &operator = (const Form & inputClass);
		
		// Get funntion
		std::string getName(void) const;
		std::string getTargetPath(void) const;
		bool getIsSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExcute(void) const;

		// member function
		void beSigned(Bureaucrat & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class NotSignException : public std::exception {
			public:
				NotSignException(void);
				NotSignException(const NotSignException & copy);
				~NotSignException(void) throw();
				NotSignException &operator = (const NotSignException & inputClass);

				virtual const char * what() const throw();
		};
};

std::ostream &operator << (std::ostream &output, Form const &inputClass);

#endif
