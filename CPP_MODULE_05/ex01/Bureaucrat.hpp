#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception> 

class Bureaucrat
{
    private:
            std::string         name;
            int                 grade;
            Bureaucrat();
    public:
            Bureaucrat(std::string &name, int grade);
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