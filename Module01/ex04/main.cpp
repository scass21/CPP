/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 23:04:24 by scass             #+#    #+#             */
/*   Updated: 2021/08/10 11:24:46 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string	filename, s1, s2, line;
	std::ifstream file;
	if (argc == 1)
	{
		std::cout << "\033[33mPlease, enter the file name: \033[0m";
		std::getline(std::cin >> std::ws, filename);
		file.open(filename.c_str());
		if (!file.is_open())
		{
			std::cout << "\033[31mThe file didn't open\033[0m" << std::endl;
			return (1);
		}
		else if (file.peek() == EOF)
		{
			std::cout << "\033[31mThe file is empty\033[0m" << std::endl;
			return (1);
		}
		std::cout << "\033[33mEnter the string that we will search for in the file: \033[0m";
		std::getline(std::cin >> std::ws, s1);
		std::cout << "\033[33mEnter a string to replace: \033[0m";
		std::getline(std::cin >> std::ws, s2);
	}
	else if (argc == 4)
	{
		filename = argv[1];
		file.open(filename.c_str());
		if (!file.is_open())
		{
			std::cout << "\033[31mThe file didn't open\033[0m" << std::endl;
			return (1);
		}
		else if (file.peek() == EOF)
		{
			std::cout << "\033[31mThe file is empty\033[0m" << std::endl;
			return (1);
		}
		s1 = argv[2];
		s2 = argv[3];
	}
	else 
	{
		std::cout << "\033[31mInvalid arguments!\033[0m" << std::endl;
			return (1);
	}
	filename = filename + ".replace";
	std::ofstream newfile;
	size_t pos;
	newfile.open(filename.c_str());
	if (!newfile.is_open())
	{
		std::cout << "\033[31mThe newfile didn't open\033[0m" << std::endl;
		return (1);
	}
	while (!file.eof())
	{
		std::getline(file, line);
		pos = 0;
		while (1)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
			{
				newfile << line << "\n";
				break ;
			}
			else
			{
				line = line.insert(pos, s2).erase(pos + s2.length(), s1.length());
				pos += s2.length();
			}
		}
	}
	file.close();
	newfile.close();
	return (0);
}