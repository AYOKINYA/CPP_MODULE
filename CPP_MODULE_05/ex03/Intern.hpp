#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

class Intern
{
    public:
            Intern();
            ~Intern();
            Intern(Intern const &copy);
            Intern& operator=(Intern const &intern);
            Form*   makeForm(std::string form_name, std::string form_target);
};


#endif