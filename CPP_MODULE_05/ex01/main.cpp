#include "Form.hpp"

int main(void)
{
    std::string name = "A";
    std::string form_name = "X";
    try
    {
        Bureaucrat a(name, 50);
        std::cout << a;
        Form x(form_name, 70, 70, 0);
        std::cout << x;
        x.beSigned(a);
        std::cout << x;
        Form y(form_name, 40, 40, 0);
        y.beSigned(a);

    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}