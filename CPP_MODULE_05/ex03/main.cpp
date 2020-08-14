/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:43:24 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:43:25 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Intern intern1;
    Intern intern2;

    Form *rrf;
    Form *f1;
    Form *f2;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf;
    f1 = intern1.makeForm("presidential pardon", "intern1");
    std::cout << *f1;
    f2 = intern1.makeForm("shrubbery creation", "intern2");
    std::cout << *f2;

    std::cout << "===========" << std::endl;
    try
    {
        f2 = intern1.makeForm("invincible authority", "invincible");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===========" << std::endl;


    return (0);
}
