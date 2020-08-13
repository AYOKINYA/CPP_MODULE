#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
    private:
    public:
            C();
            virtual ~C();
            C(C const &copy);
            C& operator=(C const &c);
};

#endif