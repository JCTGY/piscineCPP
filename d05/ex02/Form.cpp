/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:23:18 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/21 20:43:29 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const int Form::_maxGrade = 150;
const int Form::_minGrade = 1;

// Default colpien format
Form::Form(void) : _name("NAME"), _targetPath(""), _gradeSign(1), _gradeExcute(1) { 
	this->_isSigned = false;
}

Form::Form(std::string const name, std::string targetPath, const int gradeSign, const int gradeExcute)
	: _name(name), _targetPath(targetPath), _gradeSign(gradeSign), _gradeExcute(gradeExcute) {

		if (gradeSign > _maxGrade || gradeExcute > _maxGrade) {
			throw(GradeTooLowException());
		} else if (gradeSign < _minGrade || gradeExcute < _minGrade) {
			throw(GradeTooHighException());
		}
		this->_isSigned = false;
}

Form::Form(const Form & copy) : _name(copy._name), _targetPath(copy._targetPath), _gradeSign(copy._gradeSign), _gradeExcute(copy._gradeExcute) {
	this->_isSigned = copy._isSigned;
}
Form::~Form(void) { }
Form &Form::operator = (const Form &inputClass) {
	if (this != &inputClass)
		*this = inputClass;
	this->_isSigned = inputClass._isSigned;
	return *this;
}

// Get function
std::string Form::getName(void) const { return _name; }
std::string Form::getTargetPath(void) const { return _targetPath; }
bool Form::getIsSigned(void) const { return _isSigned; }
int Form::getGradeSign(void) const { return _gradeSign; }
int Form::getGradeExcute(void) const { return _gradeExcute; }

// member function
void Form::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeSign) {
		this->_isSigned = true;
	} else {
		throw(GradeTooLowException());
	}
}

// nested class
typedef Form::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(void) { }
GradeTooHighException::GradeTooHighException(const GradeTooHighException & copy) {
	*this = copy;
}
GradeTooHighException::~GradeTooHighException(void) throw() { }
GradeTooHighException &Form::GradeTooHighException::operator = (const GradeTooHighException &) {
	//std::exception::operator = (inputClass);
	return *this;
}

const char * GradeTooHighException::what() const throw() {

	return ("Grade to High");
}

typedef Form::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(void) { }
GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
	*this = copy;
}
GradeTooLowException::~GradeTooLowException(void) throw() { }
GradeTooLowException &Form::GradeTooLowException::operator = (const GradeTooLowException &) {
	//std::exception::operator = (inputClass);
	return *this;
}

const char * GradeTooLowException::what() const throw() {

	return ("Grade to Low");
}

typedef Form::NotSignException NotSignException;

NotSignException::NotSignException(void) { }
NotSignException::NotSignException(const NotSignException & copy) {
	*this = copy;
}
NotSignException::~NotSignException(void) throw() { }
NotSignException &Form::NotSignException::operator = (const NotSignException &) {
	//std::exception::operator = (inputClass);
	return *this;
}

const char * NotSignException::what() const throw() {

	return ("Not Signed");
}

// non-member function
std::ostream &operator << (std::ostream  &output, Form const &inputClass) {

	output << "Name: " << inputClass.getName() << "," << std::endl;
	output << "IsSigned: " << inputClass.getIsSigned() << "," << std::endl;
	output << "GradeSigned: " << inputClass.getGradeSign() << "," << std::endl;
	output << "GradeExcute: " << inputClass.getGradeExcute() << std::endl;
	return output;
}
