
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	return;	
}

Phonebook::~Phonebook()
{
	std::cout << "\033[32mEXIT PROGRAMM\n\033[0m";
	exit(0);
}

void Phonebook::add_info(int i)
{
	std::cout << "\033[33mPlease fill in all the fields:\033[0m" << std::endl;
	std::cout << "First Name		: ";
	std::getline(std::cin >> std::ws, first_name[i]);
	std::cout << "Last Name		: ";
	std::getline(std::cin >> std::ws, last_name[i]);
	std::cout << "Nickname		: ";
	std::getline(std::cin >> std::ws, nickname[i]);
	std::cout << "Phone Number		: ";
	std::getline(std::cin >> std::ws, phone_number[i]);
	std::cout << "Darkest Secret		: ";
	std::getline(std::cin >> std::ws, darkest_secret[i]); 
}

void	print_str(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
}

void Phonebook::display_list(int i)
{
	int	j = 0;

	std::cout << std::right << std::setfill(' ')<<std::setw(11) << "index|"
	<< std::setw(11) << "first name|"<< std::setw(11) << " last name|"<< 
	std::setw(11) << "  nickname|" << std::endl;
	while (j <= i)
	{
		std::cout << std::right << std::setfill(' ')<<std::setw(10) << j + 1 << "|";
		print_str(first_name[j]);
		print_str(last_name[j]);
		print_str(nickname[j]);
		std::cout << std::endl;
		j++;
	}
}

void Phonebook::search_info(int i)
{
	std::string	ind;
	int index;

	std::cout << "\033[33mEnter the index of the desired contact\n\033[0m";
	std::getline(std::cin >> std::ws, ind);
	if (std::cin.eof())
		exit(0);
	if (isdigit(ind[0]))
		index = atoi(ind.c_str()) - 1;
	if (!isdigit(ind[0]) || index < 0 || index > i)
	{
		std::cout << "\033[31mThis index does not exist\033[0m" << std::endl;
		return ;
	}
	else
	{
		std::cout << "First Name	: " << first_name[index] << std::endl;
		std::cout << "Last Name	: " << last_name[index] << std::endl;
		std::cout << "Nickname	: " << nickname[index] << std::endl;
		std::cout << "Phone Number	: " << phone_number[index] << std::endl;
		std::cout << "Darkest Secret	: " << darkest_secret[index] << std::endl;
	}
}
