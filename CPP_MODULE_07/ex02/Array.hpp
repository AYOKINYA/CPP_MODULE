#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
			T *arr;
	public:
			Array();
			~Array();
			Array(unsigned int n);
			Array(Array const &copy); // deep copy
			Array& operator=(Array const &array); // deep copy
			std::exception IndexOutOfRange() const;
			int & operator[](const unsigned int index);
			void * operator new[](size_t sz)
			{
				try
				{
					return (new T[sz]);
				}
				catch(std::exception const &e)
				{

				}
			}
			void	size(void);
};

#endif