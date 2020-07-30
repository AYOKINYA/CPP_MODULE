#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
	private:
		std::string	items[11];
		std::string prints[11];
	public:
		Contact();
		void		print_item(void);
		void		print_overview(int idx);
		void		set_items(void);
		~Contact();
};

Contact::Contact()
{
	this->prints[0] = "first name";
	this->prints[1] = "last name";
	this->prints[2] = "nickname";
	this->prints[3] = "login";
	this->prints[4] = "postal address";
	this->prints[5] = "email address";
	this->prints[6] = "phonebook number";
	this->prints[7] = "birthday date";
	this->prints[8] = "favorite meal";
	this->prints[9] = "underwear color";
	this->prints[10] = "darkest secret";
}

Contact::~Contact()
{}

void		Contact::set_items(void)
{
	std::string	input;
	
	for (int i = 0; i < 11; ++i)
	{
		std::cout << this->prints[i] << " :";
		std::getline(std::cin, this->items[i]);
	}
}

void		Contact::print_item(void)
{
	std::string	input;
	
	for (int i = 0; i < 11; ++i)
		std::cout << this->prints[i] << " :" << this->items[i] << std::endl;
}

void		Contact::print_overview(int idx)
{
	std::string	input;

	std::cout << "index : " << idx << "|";
	for (int i = 0; i < 3; ++i)
	{
		std::cout << this->prints[i] << " :" << this->items[i] << "|";
	}
	std::cout << std::endl;
}

class		Phonebook
{
	private:
		Contact contacts[8];
		int		count;

    public:
		Phonebook();
        void    add_contact(void);
        void    search_contact();
		~Phonebook();
};

Phonebook::Phonebook()
{
	this->count = 0;
}

Phonebook::~Phonebook()
{}

void	Phonebook::search_contact(void)
{
	size_t		i;
	std::string	idx;
	
	if (this->count == 0)
	{
		std::cout << "None. Please add a contact." << std::endl;
		return ;
	}
	for (int j = 0; j < this->count; ++j)
		this->contacts[j].print_overview(j);
	while (1)
	{
		std::getline(std::cin, idx);
		if (std::cin.eof())
		{
			std::cin.clear();
			exit(0);
		}
		else if (idx.length() == 0)
			std::cout << "Please type an index." << std::endl;
		else if (idx.length() != 1)
			std::cout << "It's not a proper input." << std::endl;
		else if (idx[0] - '0' < 0 || idx[0] - '0' > this->count - 1)
			std::cout << "It's not a proper index." << std::endl;
		else
		{
			i = std::stoi(idx);
			this->contacts[i].print_item();
			std::cout << "====SEARCH DONE!====" << std::endl;
			break ;
		}
	}
}

void	Phonebook::add_contact(void)
{
	std::string	input;

	if (this->count == 8)
	{
		std::cout << "Unfortunately, contact storage is full." << std::endl;
		return ;
	}
	this->contacts[this->count].set_items();
	std::cout << this->count << std::endl;
	++this->count;
	std::cout << "====ADD SUCCESSFULLY!====" << std::endl;
}

void	exec_input(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "commands are ADD, SEARCH, annd EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "====GOOD BYE====" << std::endl;
			break ;
		}
		else if (std::cin.eof())
			break ;
		else if (input.length() == 0)
			continue ;
		else
			std::cout << "command not found." << std::endl;
	}
}

int main(void)
{
	exec_input();
	return (0);
}