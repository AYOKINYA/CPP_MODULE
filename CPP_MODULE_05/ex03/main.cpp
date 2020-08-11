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
    shrub.beSigned(a);
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

    // Intern someRandomIntern;
    // Form *rrf;

    // rrf = someRandomIntern("robotomy request", Bender);

    return (0);
}
