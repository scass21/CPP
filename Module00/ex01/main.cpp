#include "phonebook.hpp"

int main()
{
	std::string user_input;
	int i = -1;
	int oldest_contact = 0;
	Phonebook	contact;

	while (1)
	{
		std::cout << "\033[32mEnter the command ADD, SEARCH or EXIT\n\033[0m";
		std::getline(std::cin >> std::ws, user_input);
		if (std::cin.eof())
			break ;
		if (user_input == "ADD")
		{
			i++;
			if (i == 8)
			{
				std::cout << "\033[31mWarning, the next entry will replace the oldest contact\033[0m" << std::endl;
				contact.add_info(oldest_contact);
				oldest_contact++;
				if (oldest_contact > 8)
					oldest_contact = 0;
				i = 7;
			}
			else
				contact.add_info(i);				
		}	
		else if (user_input == "SEARCH")
		{
			contact.display_list(i);
			contact.search_info(i);
		}
		else if (user_input == "EXIT")
			break;
		else
			std::cout << "\033[31mTry again!\033[0m" << std::endl;
	}
	return (0);
}