#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Character : public ICharcater
{
    private:
            std::string name;
    public:
            Character();
            Character(std::string const &name);
            ~Character();
            Character(Charcater const &copy);
            Character & operator=(Character const & characeter);
            virtual std::string const & getName() const;
            virtual void equip(AMateria* m);
            virtual void unequip(int idx);
            virtual void use(int idx, ICharacter& target);
}

#endif