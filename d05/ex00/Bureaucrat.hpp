/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:52:22 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/28 23:47:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {

	private:
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

		// nested class
		class GradeTooHighException : std::exception {
			public:
				GradeTooHighException(void);
				GradeTooHighException(const & GradeTooHighException);
				~GradeTooHighException(void);
				GradeTooHighException &operator = (const GradeTooHighException & inputClass);

