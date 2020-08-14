/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:39 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:39 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify()
{
	std::string res;

	std::ostringstream address;
	address << (void const*)this;
	res = address.str();

	return (res);
}
