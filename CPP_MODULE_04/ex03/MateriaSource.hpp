#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
            AMateria*      storage[4];
            unsigned int    n_materia;
    public:
            virtual ~MateriaSource();
            MateriaSource();
            MateriaSource(MateriaSource const &copy);
            MateriaSource& operator=(MateriaSource const &materialsource);

            virtual void learnMateria(AMateria* amateria);
            virtual AMateria* createMateria(std::string const & type);
};

#endif