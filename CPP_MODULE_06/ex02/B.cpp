/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:41:17 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:41:17 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{}

B::~B()
{}

B::B(B const &copy)
{
    *this = copy;
}

B& B::operator=(B const &b)
{
    (void)b;
    return (*this);
}