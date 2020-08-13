#include "A.hpp"

A::A()
{}

A::~A()
{}

A::A(A const &copy)
{
    *this = copy;
}

A& A::operator=(A const &a)
{
    (void)a;
    return (*this);
}