#inlcude "Array.hpp"

int & Array::operator[](const unsigned int index)
{
	try
	{
		return (arr[index]);
	}
	catch (std::exception const &e)
	{
		Array::IndexOutOfRange();
	}
}

std::exception Array::IndexOutOfRange() const
{
	throw std::out_of_range("The index is out of range!");
}