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