#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("tmp", 72, 45, 0), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form("tmp", 72, 45, 0)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & RobotomyRequestForm)
{
    if (this == &RobotomyRequestForm)
        return (*this);
    Form::operator=(RobotomyRequestForm);
    return (*this);
}

void        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::check(executor);
    std::cout << "DrrrrrrrDrrrrrrdrrrrDrrdddddrrrrr" << std::endl;
    if ((rand() % 100) > 50)
        std::cout << "<" << this->target << "> has been robotomized successfully 50% of the time." << std::endl;
    else
        std::cout << "<" << this->target << "> is a failure." << std::endl;
}
