/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:45:18 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:45:35 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
            ShrubberyCreationForm();
            std::string         target;
    public:
            ~ShrubberyCreationForm();
            ShrubberyCreationForm(std::string &target);
            ShrubberyCreationForm(ShrubberyCreationForm const &copy);
            ShrubberyCreationForm& operator=(ShrubberyCreationForm const & ShrubberyCreationForm);
            void        execute(Bureaucrat const & executor) const;
            void        tree(std::ofstream& writefile) const;
};


#endif