#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
    private:
            std::string name;
            int         grade_to_sign;
            int         grade_to_execute;
            bool        sign_flag;
    public:
            Form();
            ~Form();
            Form(std::string &name, int grade_to_sign, int grade_to_execute, bool sign_flag = 0);
            Form(Form const &copy);
            Form& operator=(Form const & form);
            std::exception GradeTooHighException();
            std::exception GradeTooLowException();
            std::string getName() const;
            bool        get_sign_flag() const;
            int         get_grade_to_sign() const;
            int         get_grade_to_execute() const;
            void        beSigned(Bureaucrat &bureaucrat);
            void        signForm(Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& out, Form const & form);


#endif