#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : intern(nullptr), sign_bureau(nullptr), execute_bureau(nullptr)
{};

OfficeBlock::OfficeBlock(Intern const &intern, Bureaucrat const &sign_bureau, Bureaucrat const &execute_bureau)
    : intern(&intern), sign_bureau(&sign_bureau), execute_bureau(&execute_bureau)
{}

OfficeBlock::~OfficeBlock()
{}

OfficeBlock::OfficeBlock(OfficeBlock const &copy)
{
    *this = copy;
}

OfficeBlock& OfficeBlock::operator=(OfficeBlock const &officeblock)
{
    (void)officeblock;
    return (*this);
}

void        OfficeBlock::setIntern(Intern const &intern)
{
    this->intern = &intern;
}

void    OfficeBlock::setSigner(Bureaucrat const & sign_bureau)
{
    this->sign_bureau = &sign_bureau;
}

void    OfficeBlock::setExecutor(Bureaucrat const & execute_bureau)
{
    this->execute_bureau = &execute_bureau;
}

std::exception   OfficeBlock::NullPtrException() const
{
    throw std::invalid_argument("The intern and two bureaucrats MUST NOT BE NULLPTR"); 
}

void    OfficeBlock::doBureaucracy(std::string const &name, std::string const &target) const
{
    Form *form;

    if (this->intern == nullptr || this->sign_bureau == nullptr || this->execute_bureau == nullptr)
        OfficeBlock::NullPtrException();
    
    form = this->intern->makeForm(name, target);
    this->sign_bureau->signForm(*form);
    this->execute_bureau->executeForm(*form);
    delete form;
}

