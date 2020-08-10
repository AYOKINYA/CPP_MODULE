#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
    private:
            std::string type;
            unsigned int _xp;
    public:
            AMateria(std::string const & type);
            AMateria();
            AMateria(AMateria const &copy);
            AMateria& operator=(AMateria const &amateria);
            virtual ~AMateria();

            std::string const & getType() const;
            unsigned int getXP() const;

            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
};

#endif