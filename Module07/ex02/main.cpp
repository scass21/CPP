/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:33:19 by scass             #+#    #+#             */
/*   Updated: 2021/09/08 15:12:40 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	std::cout << "\033[33mArray of int :\033[0m" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	for (int j = 0; j < 5; j++)
	{
		int i = rand()% 100;
		std::cout << "numbers [" << i << "] = " << numbers[i] << std::endl;
		std::cout << "\033[33mmirror [" << i << "] = " << mirror[i] << "\033[0m" << std::endl;
	}

	//SCOPE
	{
		std::cout << "\033[33mAssignment operator test (tmp = numbers) :\033[0m\nSize of numbers = " << numbers.size() << "\n"; 
		Array<int> tmp = numbers;
		std::cout << "Size of tmp = " << tmp.size() << std::endl;
		std::cout << "\033[33mCopy constructor test (test(tmp)):\n\033[0m";
		Array<int> test(tmp);
		std::cout << "Size of test = " << test.size() << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	std::cout << "\033[33mException test :\033[0m" << std::endl;
	try
	{
		std::cout << "numbers[-2] = 0 : ";
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalid index " << e.what() << '\n';
	}
	try
	{
		std::cout << "numbers[MAX_VAL] = 0 : ";
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalid index " << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
		
	std::cout << "\033[33mEmpty array test :\033[0m" << std::endl;
	Array<double> arr;
	std::cout << "Size of arr = " << arr.size() << std::endl;

	std::cout << "\033[33mArray of string :\033[0m" << std::endl;
	Array<std::string> str(3);
	std::cout << "Size of str = " << str.size() << std::endl;
	str[0] = "holly; ";
	str[1] = "molly; ";
	str[2] = "polly;";
	std::cout << "str[0] = " << str[0];
	std::cout << "str[1] = " << str[1];
	std::cout << "str[2] = " << str[2] << std::endl;
	delete [] mirror;
	return 0;
}
