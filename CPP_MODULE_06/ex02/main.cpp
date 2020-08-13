#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dis(0, 2);
    int i = dis(mt);
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void    identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;
}

void    identify_from_reference(Base & p)
{
    identify_from_pointer(&p);
}

int main(void)
{
    Base *i;
    Base *j;
    Base *k;

    srand((unsigned int)time(0));

    i = generate();
    j = generate();
    k = generate();

    std::cout << "===========" << std::endl;
    identify_from_pointer(i);
    identify_from_reference(*i);
    std::cout << "===========" << std::endl;
    identify_from_pointer(j);
    identify_from_reference(*j);
    std::cout << "===========" << std::endl;
    identify_from_pointer(k);
    identify_from_reference(*k);
    std::cout << "===========" << std::endl;
    delete (i);
    delete (j);
    delete (k);

    return (0);
}