#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), _xp(0)
{}

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria& AMateria::operator=(AMateria const &amateria)
{
    if (this == &amateria)
        return (*this);

    this->_xp = amateria._xp;
    return (*this);
}   

std::string const & AMateria::getType() const
{
    return (this->type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}