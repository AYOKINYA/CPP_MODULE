/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:52:08 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:52:08 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception> 

class Bureaucrat
{
    private:
            std::string const   name;
            int                 grade;
            Bureaucrat();
    public:
            Bureaucrat(std::string const &name, int grade);
            Bureaucrat(Bureaucrat const &copy);
            Bureaucrat& operator=(Bureaucrat const &bureaucrat);
            ~Bureaucrat();
            std::exception        GradeTooHighException() const;
            std::exception       GradeTooLowException() const;
            std::string getName() const;
            int         getGrade() const;
            void        decrement_grade();
            void        increment_grade();
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const &bureaucrat);

#endif