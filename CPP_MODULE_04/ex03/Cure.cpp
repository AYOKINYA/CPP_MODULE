/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:08 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:08 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
    *this = copy;
}

Cure& Cure::operator=(Cure const &cure)
{
    if (this == &cure)
        return (*this);
    AMateria::operator=(cure);
    return (*this);
}   

Cure::~Cure()
{}

AMateria* Cure::clone() const
{
    Cure* copy = new Cure(*this);
    return (copy);
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout <<  "* heals ";
    std::cout << target.getName() << "'s wounds *" << std::endl;
}