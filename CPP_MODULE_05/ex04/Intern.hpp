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
            Form*   makeForm(std::string form_name, std::string form_target) const;
            Form*   CreatePres(std::string &target) const;
            Form*   CreateRobotomy(std::string &target) const;
            Form*   CreateShrubbery(std::string &target) const;
};


#endif