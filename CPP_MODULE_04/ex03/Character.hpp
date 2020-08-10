#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
	    std::string		name;
		AMateria*		inventory[4];
		unsigned int	i_count;
    public:
	    Character();
	    Character(std::string const &name);
	    ~Character();
	    Character(Character const &copy);
	    Character & operator=(Character const & characeter);
	    virtual std::string const & getName() const;
	    virtual void equip(AMateria* m);
	    virtual void unequip(int idx);
	    virtual void use(int idx, ICharacter& target);
};

#endif