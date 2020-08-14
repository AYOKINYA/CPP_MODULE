/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:11 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:11 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
    private:
            std::string type;
            unsigned int _xp;
    public:
            Ice();
            Ice(Ice const &copy);
            Ice& operator=(Ice const &ice);
            virtual ~Ice();

            virtual AMateria* clone() const;
            virtual void use(ICharacter& target);
};

#endif