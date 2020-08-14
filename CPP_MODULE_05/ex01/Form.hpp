/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:52:51 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:52:51 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
class Form;
# include "Bureaucrat.hpp"

class Form
{
    private:
            std::string const   name;
            int const           grade_to_sign;
            int const           grade_to_execute;
            bool        sign_flag;
    public:
            Form();
            ~Form();
            Form(std::string const &name, int const grade_to_sign, int const grade_to_execute, bool sign_flag = 0);
            Form(Form const &copy);
            Form& operator=(Form const & form);
            std::exception GradeTooHighException();
            std::exception GradeTooLowException();
            std::exception AlreadySignedException();
            std::string getName() const;
            bool        get_sign_flag() const;
            int         get_grade_to_sign() const;
            int         get_grade_to_execute() const;
            void        beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& out, Form const & form);


#endif