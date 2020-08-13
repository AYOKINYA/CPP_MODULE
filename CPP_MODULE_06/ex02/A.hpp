#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
    private:
    public:
            A();
            virtual ~A();
            A(A const &copy);
            A& operator=(A const &a);
};

#endif