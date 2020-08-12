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
    (void)intern;
    return (*this);
    
}

std::exception Intern::FormNameException() const
{
	throw std::invalid_argument("the form is not available.");
}

Form*   Intern::makeForm(std::string form_name, std::string form_target) const
{
    std::string form_names[3] = 
    {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };

    Form*   (Intern:: * create[3])(std::string & target) const = {
        &Intern::CreatePres,
        &Intern::CreateRobotomy,
        &Intern::CreateShrubbery
    };
    Form *form = nullptr;

    for (int i = 0; i < 3; ++i)
    {
        if (form_names[i] == form_name)
            form = (this->*(create[i]))(form_target);
    }
    if (form == nullptr)
        Intern::FormNameException();
    return (form);
}

Form*   Intern::CreatePres(std::string &target) const
{
    return (new PresidentialPardonForm(target));
}

Form*   Intern::CreateRobotomy(std::string &target) const
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::CreateShrubbery(std::string &target) const
{
    return (new ShrubberyCreationForm(target));
}

