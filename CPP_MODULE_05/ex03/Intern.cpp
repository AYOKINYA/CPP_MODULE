#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(Intern const &copy)
{
    *this = copy;
}

Intern& Intern::operator=(Intern const &intern)
{
    if (this == &intern)
        return (*this);
}

Form*   Intern::makeForm(std::string form_name, std::string form_target)
{

}


