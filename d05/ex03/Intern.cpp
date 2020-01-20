
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) { }
Intern::Intern(const Intern & copy) { *this = copy; }
Intern &Intern::operator = (const Intern & inputClass) { return *this; }
Intern::~Intern(void) { }

Form *Intern::makeForm(std::string name, std::string target) {
	Form *f = nullptr;
	if (name == "shrubbery creation")
		f = new ShrubberyCreationForm(target);
	else if (name == "robotomy request")
		f = new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		f = new PresidentialPardonForm(target);
	else
		std::cout << "Error: Invalid form request for Intern" << std::endl;
	return f;
}
