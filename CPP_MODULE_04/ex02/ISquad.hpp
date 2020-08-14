/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:02:18 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:02:19 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class ISquad
{
    public:
            virtual ~ISquad() {}
            virtual int getCount() const = 0;
            virtual ISpaceMarine* getUnit(int) const = 0;
            virtual int push(ISpaceMarine*) = 0;
};

#endif