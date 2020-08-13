#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
    private:
    public:
            B();
            virtual ~B();
            B(B const &copy);
            B& operator=(B const &b);
};

#endif