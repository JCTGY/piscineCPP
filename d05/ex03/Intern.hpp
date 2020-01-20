
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern & copy);
		Intern &operator = (const Intern & inputClass);
		~Intern(void);

		Form *makeForm(std::string name, std::string target);
};

#endif
