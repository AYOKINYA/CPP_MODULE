/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:44 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:45 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify()
{
	return (this->brain.identify());
}

Brain&		Human::getBrain()
{
	return (this->brain);
}
