/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:02:53 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:02:53 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
    *this = copy;
    std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &tacticalmarine)
{
    (void)tacticalmarine;
    return (*this);
}   

TacticalMarine::~TacticalMarine()
{
    std::cout <<  "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
    TacticalMarine *copy = new TacticalMarine(*this);
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