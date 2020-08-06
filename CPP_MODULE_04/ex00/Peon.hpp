#ifndef PEON_HPP
# define PEON_HPP

class Peon : public Victim
{
	public:
			Peon();
			Peon(std::string name);
			Peon(const Peon &copy);
			Peon& operator= (const &Peon peon);
			~Peon();
			void    getPolymorphed() const;
	private:
			std::string name;
};

Peon::Peon(): Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

# endif