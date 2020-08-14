/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:54:07 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:54:07 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    std::string name = "A";
    std::string form_name = "X";
    std::string target = "home";
    
    Bureaucrat a(name, 50);
    std::cout << a;

    ShrubberyCreationForm shrub(target);
    std::cout << shrub;
    a.signForm(shrub);
    shrub.execute(a);
    std::cout << a;


    Bureaucrat b(name, 3);
    std::cout << b;
    target = "Gaepo";
    PresidentialPardonForm pres(target);
    pres.beSigned(b);
    pres.execute(b);

    RobotomyRequestForm robot("robot");
    robot.beSigned(b);
    robot.execute(b);
    b.executeForm(robot);
    b.executeForm(robot);

    std::cout << "===========" << std::endl;
    try
    {
        PresidentialPardonForm pres2 = PresidentialPardonForm("pres2");
        a.executeForm(pres2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===========" << std::endl;
    try
    {
        pres.beSigned(a);
        pres.execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===========" << std::endl;
    try
    {
        pres.beSigned(a);
        pres.execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}