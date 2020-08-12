#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"
class OfficeBlock;

class OfficeBlock
{
    private:
            OfficeBlock(OfficeBlock const &copy);
            OfficeBlock& operator=(OfficeBlock const &officeblock);
            Intern const * intern;
            Bureaucrat const * sign_bureau;
            Bureaucrat const * execute_bureau;
    public:
            OfficeBlock();
            OfficeBlock(Intern const &intern, Bureaucrat const &sign_bureau, Bureaucrat const &execute_bureau);
            ~OfficeBlock();
            void    setIntern(Intern const &intern);
            void    setSigner(Bureaucrat const & sign_bureau);
            void    setExecutor(Bureaucrat const& execute_bureau);
            void    doBureaucracy(std::string const &name, std::string const &target) const;
            std::exception NullPtrException() const;
};

#endif