
#include "OfficeBlock.hpp"

int main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);
    try
    {
        ob.doBureaucracy("mutant pig termination", "Pigley");
    }
    catch (std::out_of_range & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
