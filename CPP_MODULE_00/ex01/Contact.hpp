/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:49:25 by jkang             #+#    #+#             */
/*   Updated: 2020/07/30 17:04:49 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	private:
		std::string	items[11];
		std::string prints[11];

	public:
		Contact();
		void		print_item(void);
		void		print_overview(int idx);
		void		set_items(void);
		~Contact();
};

#endif