/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:02:12 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:02:12 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
            AssaultTerminator();
            virtual ~AssaultTerminator();
            AssaultTerminator(AssaultTerminator const &copy);
            AssaultTerminator& operator=(AssaultTerminator const &assaultterminator);
            virtual ISpaceMarine* clone() const;
            virtual void battleCry() const;
            virtual void rangedAttack() const;
            virtual void meleeAttack() const;
};

#endif