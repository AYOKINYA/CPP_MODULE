#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{
    private:
            PresidentialPardonForm();
            std::string         target;
    public:
            ~PresidentialPardonForm();
            PresidentialPardonForm(std::string const &target);
            PresidentialPardonForm(PresidentialPardonForm const &copy);
            PresidentialPardonForm& operator=(PresidentialPardonForm const & PresidentialPardonForm);
            void        execute(Bureaucrat const & executor) const;
};


#endif