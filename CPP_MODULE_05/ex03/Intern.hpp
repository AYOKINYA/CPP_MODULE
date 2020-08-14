/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:43:15 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:43:15 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
    public:
            Intern();
            ~Intern();
            Intern(Intern const &copy);
            Intern& operator=(Intern const &intern);
            std::exception FormNameException() const;
            Form*   makeForm(std::string form_name, std::string form_target);
            Form*   CreatePres(std::string &target);
            Form*   CreateRobotomy(std::string &target);
            Form*   CreateShrubbery(std::string &target);
};


#endif