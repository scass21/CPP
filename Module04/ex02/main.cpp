/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:58:34 by scass             #+#    #+#             */
/*   Updated: 2021/08/23 22:21:23 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	std::cout << "\033[32mArray of Animal half of it will be Dog and the other half will be Cat\033[0m" << std::endl;
	Animal* animal[10];
	int i = 0;

	while(i < 6)
	{
		(i % 2) ? animal[i] = new Dog() : animal[i] = new Cat();
		animal[i]->makeSound();
		i++;
	}
	for (int j = 0; j < 6; j++)
		delete animal[j];

	std::cout << "\033[32mTest overloading the assignment operator in a class Cat\033[0m" << std::endl;
	Cat a;
	Cat b;
	a = b;

	std::cout << a.getBrainIdea(100) << std::endl;
	std::cout << b.getBrainIdea(100) << std::endl;
	std::cout << &a << " " << &b << std::endl;

	std::cout << "\033[32mTest copy constructor in a class Dog\033[0m" << std::endl;
	Dog c;
	Dog d(c);

	std::cout << c.getBrainIdea(5) << std::endl;
	std::cout << d.getBrainIdea(5) << std::endl;
	std::cout << &c << " " << &d << std::endl;
	
	return (0);
}