#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>

class Conversion
{
    private:
            std::string input;
            Conversion();
    public:
            Conversion(std::string input);
            ~Conversion();
            Conversion(Conversion const &copy);
            Conversion& operator=(Conversion const &conversion);
};

#endif