/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:07:52 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:07:53 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string Name);
			FragTrap(const FragTrap& copy);
			FragTrap& operator= (const FragTrap &fragtrap);
			~FragTrap();
			void	    vaulthunter_dot_exe(std::string const & target);
};

# endif