/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:41:14 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:41:14 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
    private:
    public:
            A();
            virtual ~A();
            A(A const &copy);
            A& operator=(A const &a);
};

#endif