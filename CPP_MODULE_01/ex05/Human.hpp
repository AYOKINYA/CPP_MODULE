/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:47 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:47 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	private:
			Brain brain;
	public:
			Human() {};
			~Human() {};
			std::string	identify();
			Brain&		getBrain();
};

#endif
