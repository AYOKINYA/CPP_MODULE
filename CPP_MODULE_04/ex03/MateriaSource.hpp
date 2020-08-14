/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:27 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:27 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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