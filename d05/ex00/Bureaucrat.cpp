
#include "Bureaucrat.hpp"

const int _maxGrade = 150;
const int _minGrade = 1;

Bureaucrat::Bureaucrat(void) : _name("NAME"), _grade(_maxGrade) { }

Bureaucrat::Bureaucrat(std::string name, int grade) :
		_name(name), _grade(grade) {

if (grade < _minGrade) {
	throw(Bureaucrat::GradeTooHightEx
