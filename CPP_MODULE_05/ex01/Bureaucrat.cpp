#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	if (grade < 1)
        Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);

    this->grade = bureaucrat.grade;

    return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::exception    Bureaucrat::GradeTooHighException() const
{
    throw std::out_of_range("Grade is too high! It must be greater than 1.");
}

std::exception    Bureaucrat::GradeTooLowException() const
{
    throw std::out_of_range("Grade is too low! It must be lower than 150.");
}


std::string Bureaucrat::getName() const
{
    return (this->name);
}

int         Bureaucrat::getGrade() const
{
    return (this->grade);
}

void        Bureaucrat::decrement_grade()
{
    ++this->grade;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void        Bureaucrat::increment_grade()
{
    --this->grade;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &bureaucrat)
{
    out << "<" << bureaucrat.getName() << ">, bureaucrat grade ";
    out << "<" << bureaucrat.getGrade() << ">." << std::endl;
    return (out);
}

void        Bureaucrat::signForm(Form &form)
{
	if (form.get_sign_flag())
    {
        std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> ";
		std::cout << "the form is already signed" << std::endl;
    }
	else if (form.get_grade_to_sign() < this->grade)
	{
		std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> ";
		std::cout << "The grade is not high enough to sign." << std::endl;
	}
    else
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    form.beSigned(*this);
}


