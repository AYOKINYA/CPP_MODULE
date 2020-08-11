#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const  &target) : Form("tmp", 25, 5, 0), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form("tmp", 25, 5, 0)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & PresidentialPardonForm)
{
    if (this == &PresidentialPardonForm)
        return (*this);
    Form::operator=(PresidentialPardonForm);
    return (*this);
}

void        PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::check(executor);
    std::cout << "<" << this->target << "> pardoned by Zafod Beeblebrox." << std::endl;
}
