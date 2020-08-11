#include "Form.hpp"

Form::Form()
{}

Form::~Form()
{}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute, bool sign_flag = 0) : name(name), sign_flag(sign_flag)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		Form::GradeTooLowException();
	else
	{
		this->grade_to_sign = grade_to_sign;
		this->grade_to_execute = grade_to_execute;
	}
}

Form::Form(Form const &copy)
{
    *this = copy;
}

Form& Form::operator=(Form const & form)
{
    if (this == &form)
        return (*this);
    this->name = form.name;
    this->sign_flag = form.sign_flag;
    this->grade_to_sign = form.grade_to_sign;
    this->grade_to_execute = form.grade_to_execute;

    return (*this);
}

std::ostream& operator<<(std::ostream& out, Form const & form)
{
	out << "name : " << form.getName() << std::endl;
	out << "sign_flag : " << form.get_sign_flag() << std::endl;
	out << "grade_to_sign : " << form.get_grade_to_sign() << std::endl;
	out << "grade_to_execute : " << form.get_grade_to_execute() << std::endl;

	return (out);
}

std::exception Form::GradeTooHighException() const
{
    throw std::out_of_range("Grade is too high! It must be greater than 1.");
}

std::exception Form::GradeTooLowException() const
{
    throw std::out_of_range("Grade is too low! It must be lower than 150.");
}

std::exception Form::UnsignedFormExcetion() const
{
	throw std::out_of_range("It must be signed.");
}

std::string Form::getName() const
{
    return (this->name);
}

bool        Form::get_sign_flag() const
{
	return (this->sign_flag);
}

int         Form::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int         Form::get_grade_to_execute() const
{
	return (this->grade_to_execute);
}

void        Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		Form::GradeTooLowException();
	else
		this->sign_flag = 1;
}

void        Form::signForm(Bureaucrat &bureaucrat)
{
	if (this->sign_flag)
		std::cout << "<" << bureaucrat.getName() << "> signs <" << this->getName() << ">" << std::endl;
	else
	{
		std::cout << "<" << bureaucrat.getName() << "> cannot sign <" << this->getName() << "> ";
		std::cout << "the grade is not high enough" << std::endl;
	}
}

void		Form::check(Bureaucrat const &bureaucrat) const
{
	if (this->sign_flag == 0)
		Form::UnsignedFormExcetion();
	std::cout << "grade execute : " << this->grade_to_execute << std::endl;
	std::cout << "grade : " << bureaucrat.getGrade() << std::endl;
	if (bureaucrat.getGrade() > this->grade_to_execute)
		Form::GradeTooLowException();
}