#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Phonebook
{
public:
	Phonebook ();
	~Phonebook();
	void add_info(int i);
	void display_list(int i);
	void search_info(int i);
private:
	std::string first_name[8];
	std::string last_name[8];
	std::string nickname[8];
	std::string phone_number[8];
	std::string darkest_secret[8];
};

#endif
