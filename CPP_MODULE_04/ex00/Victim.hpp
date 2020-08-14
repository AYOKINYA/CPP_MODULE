/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:47:10 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:47:11 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
	public:
			Victim(std::string name);
			Victim(const Victim &copy);
			Victim& operator= (const Victim &victim);
			~Victim();
            virtual void	getPolymorphed() const;
            std::string		get_name(void) const;
	protected:
			Victim();
			std::string name;
};

std::ostream& operator<< (std::ostream& out, const Victim &victim);

#endif