/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:54:39 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:54:39 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
    private:
            RobotomyRequestForm();
            std::string         target;
    public:
            ~RobotomyRequestForm();
            RobotomyRequestForm(std::string const & target);
            RobotomyRequestForm(RobotomyRequestForm const &copy);
            RobotomyRequestForm& operator=(RobotomyRequestForm const & RobotomyRequestForm);
            void        execute(Bureaucrat const & executor) const;
};


#endif