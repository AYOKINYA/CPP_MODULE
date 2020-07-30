#define PHONEBOOK_HPP
# define PHONEBOOK_HPP

class		Phonebook
{
	private:
		Contact contacts[8];
		size_t	count;
    public:
        void    add_contact(void);
        void    search_contact(void);
};

# endif