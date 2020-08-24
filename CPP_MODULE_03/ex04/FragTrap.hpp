/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:39 by jkang             #+#    #+#             */
/*   Updated: 2020/08/24 14:52:13 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string Name);
			FragTrap(const FragTrap& copy);
			FragTrap& operator= (const FragTrap &fragtrap);
			virtual ~FragTrap();
			void	    vaulthunter_dot_exe(std::string const & target);
};

# endif