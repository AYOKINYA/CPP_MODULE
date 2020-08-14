/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:02:09 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:02:10 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISpaceMarine_HPP
# define ISpaceMarine_HPP
# include <iostream>
# include <string>

class ISpaceMarine
{
    public:
            virtual ~ISpaceMarine() {}
            virtual ISpaceMarine* clone() const = 0;
            virtual void battleCry() const = 0;
            virtual void rangedAttack() const = 0;
            virtual void meleeAttack() const = 0;
};

#endif