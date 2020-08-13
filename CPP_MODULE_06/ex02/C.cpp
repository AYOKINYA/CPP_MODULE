#include "C.hpp"

C::C()
{}

C::~C()
{}

C::C(C const &copy)
{
    *this = copy;
}

C& C::operator=(C const &c)
{
    (void)c;
    return (*this);
}