#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
	public:
			Victim();
			Victim(std::string name);
			Victim(const Victim &copy);
			Victim& operator= (const Victim &victim);
			~Victim();
            void        getPolymorphed() const;
            std::string	get_name(void) const;
	protected:
			std::string name;
};

std::ostream& operator<< (std::ostream& out, const Victim &victim);

#endif