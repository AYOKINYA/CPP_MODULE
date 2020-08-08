# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
    std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

Tactical& TacticalMarine::operator=(TacticalMarine const &copy)
{
    
}   

TacticalMarine::~TacticalMarine()
{
    std::cout <<  "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
    TacticalMarine *copy = new (*this);
    return (copy);
}

void TacticalMarine::battleCry() const
{
    std::cout <<  "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout <<  "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout <<  "* attacks with a chainsword *" << std::endl;

}