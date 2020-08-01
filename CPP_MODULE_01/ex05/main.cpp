#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    Human homo_sapiens;

    std::cout << homo_sapiens.identify() << std::endl;
    std::cout << homo_sapiens.getBrain().identify() << std::endl;
}