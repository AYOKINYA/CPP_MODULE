/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:42 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:42 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
    private:
            int				activity;
            unsigned int	oxygen_level;
    public:
			Brain() : activity(0), oxygen_level(0)
			{
				std::cout << "brain is created" << std::endl;
				std::cout << "brain activity : " << this->activity << std::endl;
				std::cout << "Brain oxygen_level : " << this->oxygen_level << std::endl;
			};
			~Brain() 
			{
				std::cout << "brain is destroyed" << std::endl;
			};
			std::string	identify();
};

# endif