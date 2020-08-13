#include "B.hpp"

B::B()
{}

B::~B()
{}

B::B(B const &copy)
{
    *this = copy;
}

B& B::operator=(B const &b)
{
    (void)b;
    return (*this);
}