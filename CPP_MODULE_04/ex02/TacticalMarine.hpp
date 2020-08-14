/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:02:56 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:02:56 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
            TacticalMarine();
            virtual ~TacticalMarine();
            TacticalMarine(TacticalMarine const &copy);
            TacticalMarine& operator=(TacticalMarine const &tacticalmarine);
            virtual ISpaceMarine* clone() const;
            virtual void battleCry() const;
            virtual void rangedAttack() const;
            virtual void meleeAttack() const;
};

#endif