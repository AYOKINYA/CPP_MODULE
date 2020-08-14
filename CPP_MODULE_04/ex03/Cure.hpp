/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:06 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:06 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
            Cure();
            Cure(Cure const &copy);
            Cure& operator=(Cure const &cure);
            virtual ~Cure();

            virtual AMateria* clone() const;
            virtual void use(ICharacter& target);
};

#endif