#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), _xp(0)
{}

AMateria::AMateria()
{}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria& AMateria::operator=(AMateria const &amateria)
{
    if (this == &amateria)
        return (*this);

    this._xp = amateria._xp;
    this.type = amateria.type;
    return (*this);
}   

AMateria::~AMateria()
{}

std::string const & AMateria::getType() const
{
    return (this->type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

AMateria* AMateria::clone() const
{
    AMateria* copy = new Amateria(*this);
    return (copy);
}

void AMateria::use(ICharacter& target)
{
    this->_xp += 10;
}