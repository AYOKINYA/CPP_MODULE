#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout <<  "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
    *this = copy;
    std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &assaultterminator)
{
    (void)assaultterminator;
    return (*this);
}   

ISpaceMarine* AssaultTerminator::clone() const
{
    AssaultTerminator *copy = new AssaultTerminator(*this);
    return (copy);
}


void AssaultTerminator::battleCry() const
{
    std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout <<  "* attacks with chainfists *" << std::endl;
}