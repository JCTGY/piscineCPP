/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:29:28 by jchiang-          #+#    #+#             */
/*   Updated: 2019/10/29 19:00:07 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

const int Bureaucrat::_maxGrade = 150;
const int Bureaucrat::_minGrade = 1;


// Default Colpien format
Bureaucrat::Bureaucrat(void) : _name("NAME"), _grade(150) { }
Bureaucrat::Bureaucrat(std::string const name, int grade) :
		_name(name){

	if (grade < _minGrade) {
		throw(GradeTooHighException());
	} else if (grade > _maxGrade) {
		throw(GradeTooLowException());
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) {

	*this = copy;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &inputClass) {

	if (this != &inputClass)
		*this = inputClass;
	return *this;
}

// Get function
std::string Bureaucrat::getName(void) const { return _name; }
int Bureaucrat::getGrade(void) const { return _grade; }

// member function
void Bureaucrat::increatmentGrade(void) { 
	if (_grade <= _minGrade)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade -= 1;
}

void Bureaucrat::decreatmentGrade(void) { 
	if (_grade >= _maxGrade)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade += 1; 
}

// nested class
typedef Bureaucrat::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(void) { }
GradeTooHighException::GradeTooHighException(const GradeTooHighException & copy) {
	*this = copy;
}
GradeTooHighException::~GradeTooHighException(void) throw() { }
GradeTooHighException &Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException &) { 
	//std::exception::operator = (inputClass);
	return *this;
}

const char * GradeTooHighException::what() const throw() {

	return ("Grade to High");
}

typedef Bureaucrat::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(void) { }
GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
	*this = copy;
}
GradeTooLowException::~GradeTooLowException(void) throw() { }
GradeTooLowException &Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException &) { 
	//std::exception::operator = (inputClass);
	return *this;
}

const char * GradeTooLowException::what() const throw() {

	return ("Grade to Low");
}

// non-member function
std::ostream &operator << (std::ostream  &output, Bureaucrat const &inputClass) {

	output <<  inputClass.getName() << ", bureaucrat grade " << inputClass.getGrade() << std::endl;
	return output;
}
