/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:41:19 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:41:20 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
    private:
    public:
            B();
            virtual ~B();
            B(B const &copy);
            B& operator=(B const &b);
};

#endif