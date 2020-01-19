
#include "Intern.hpp"

Intern::Intern(void) { }
Intern::Intern(const Intern & copy) { *this = copy; }
Intern &Intern::operator = (const Intern & inputClass) {
	if (this == &inputClass)
		return *this;
	//TODO
}
