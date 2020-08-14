/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:39 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:39 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : n_materia(0)
{
    for (int i = 0; i < 4 ; ++i)
        storage[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 ; ++i)
        delete storage[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy) : n_materia(0)
{
    for (unsigned int i = 0; i < copy.n_materia; ++i)
        this->learnMateria(copy.storage[i]->clone());
    for (int i = 0; i < 4 ; ++i)
        storage[i] = 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &MateriaSource)
{
    for (int i = 0; i < 4 ; ++i)
        delete storage[i];
    this->n_materia = 0;
    for (unsigned int i = 0; i < MateriaSource.n_materia; ++i)
        this->learnMateria(MateriaSource.storage[i]->clone());
    for (int i = 0; i < 4 ; ++i)
        storage[i] = 0;

    return (*this);

}

void MateriaSource::learnMateria(AMateria* amateria)
{
    if (this->n_materia > 3 || amateria == nullptr)
        return ;
    this->storage[this->n_materia] = amateria;
    ++this->n_materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (unsigned int i = 0; i < this->n_materia; ++i)
    {
        if (this->storage[i]->getType() == type)
            return(this->storage[i]->clone());
    }
    return (0);
}