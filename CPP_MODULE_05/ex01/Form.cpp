/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:52:48 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:52:48 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("tmp"), grade_to_sign(0), grade_to_execute(0), sign_flag(0)
{}

Form::~Form()
{}

Form::Form(std::string const &name, int const grade_to_sign, int const grade_to_execute, bool sign_flag)
	: name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute), sign_flag(sign_flag)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		Form::GradeTooLowException();
}

Form::Form(Form const &copy)
	: name(copy.name), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute), sign_flag(copy.sign_flag)
{
    *this = copy;
}

Form& Form::operator=(Form const & form)
{
    if (this == &form)
        return (*this);

    this->sign_flag = form.sign_flag;
    
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

std::exception Form::GradeTooHighException()
{
    throw std::out_of_range("Grade is too high! It must be greater than 1.");
}

std::exception Form::GradeTooLowException()
{
    throw std::out_of_range("Grade is too low! It must be lower than 150.");
}

std::exception Form::AlreadySignedException()
{
    throw std::out_of_range("The form is already signed!");
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
	else if (this->sign_flag == 1)
		Form::AlreadySignedException();
	else
		this->sign_flag = 1;
}