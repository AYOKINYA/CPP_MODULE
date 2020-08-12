#include "conversion.hpp"

Conversion::Conversion()
{}


Conversion::Conversion(std::string input) : input(input)
{}

Conversion::~Conversion()
{}

Conversion::Conversion(Conversion const &copy)
{
    *this = copy;
}

Conversion& Conversion::operator=(Conversion const &conversion)
{
    if (this == &conversion)
        return (*this);
    this->input = conversion.input;
    return (*this);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "argc must be 2!" << std::endl;
        return (-1);
    }
    std::string input = argv[1];
    
    std::cout << "char : ";
    if (stoi(input) > 0 && stoi(input) < 128)
        std::cout << "'" << static_cast<char>(stoi(input)) << "'" << std::endl;

    //std::cout << static_cast<int>(input) << std::endl;
    //std::cout << static_cast<float>(input) << std::endl;
    //std::cout << static_cast<double>(input) << std::endl;
    
    return (0);
}