#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("tmp", 145, 137, 0), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form("tmp", 145, 137, 0), target("")
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ShrubberyCreationForm)
{
    if (this == &ShrubberyCreationForm)
        return (*this);
    Form::operator=(ShrubberyCreationForm);
    return (*this);
}

void		ShrubberyCreationForm::tree(std::ofstream& writefile) const
{
	int branchLine = 1;
	int trHgt = 10;

	while (branchLine <= (trHgt - 2))
	{
		for (int spaces = 0; spaces < (trHgt - branchLine); spaces++)
		{
			writefile << ' ';
		}
		for (int tree = 0; tree < (branchLine * 2 - 1); tree++)
		{
			if (branchLine % 2 == 0)
				writefile << "#";
			else
				writefile << "o";
		}
		writefile << std::endl;
		branchLine += 1;
	}
	for (int trunkLine = 1; trunkLine <= 2; trunkLine++)
	{
		for (int spaces = 2; spaces <= (trHgt - 1); spaces++)
		{
			writefile << " ";
		}
		writefile << "|||";
		writefile << "\n";
	}
}

void        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::check(executor);

	std::string filename = "";
	std::ofstream	writefile;

	filename += "<";
	filename += this->target;
	filename += ">_shruberry";
	writefile.open(filename, std::fstream::out | std::fstream::app);
	if (writefile.is_open() == 0)
	{
		std::cout << "fail to open a file." << std::endl;
		exit(1);
	}
	this->tree(writefile);
	writefile.close();
}
