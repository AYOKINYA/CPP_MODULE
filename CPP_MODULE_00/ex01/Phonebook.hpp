/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:44:58 by jkang             #+#    #+#             */
/*   Updated: 2020/07/30 17:36:10 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class		Phonebook
{
	private:
		Contact contacts[8];
		int		count;

    public:
		Phonebook();
        void    add_contact(void);
        void    search_contact(void);
		bool	validate_search_input(std::string idx);
		void	current_status(void);
		~Phonebook();
};

# endif
