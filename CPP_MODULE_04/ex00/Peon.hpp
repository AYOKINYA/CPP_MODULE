#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
	public:
			Peon();
			Peon(std::string name);
			Peon(const Peon &copy);
			Peon& operator= (const Peon &peon);
			~Peon();
			void    	getPolymorphed() const;
			std::string	get_name(void) const;
	private:
			std::string name;
};

std::ostream& operator<< (std::ostream& out, const Peon &peon);

# endif