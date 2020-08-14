/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:54:28 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:54:28 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const  &target) : Form("tmp", 25, 5, 0), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form("tmp", 25, 5, 0), target(copy.target)
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
