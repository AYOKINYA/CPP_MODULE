/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:41:30 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:41:31 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
    private:
    public:
            C();
            virtual ~C();
            C(C const &copy);
            C& operator=(C const &c);
};

#endif