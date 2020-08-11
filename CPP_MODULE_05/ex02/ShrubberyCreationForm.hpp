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

// std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm const & ShrubberyCreationForm);


#endif