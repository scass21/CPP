/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:58:34 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 20:44:51 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete	j;
delete	i;

const WrongAnimal* k = new WrongCat();
std::cout << k->getType() << " " << std::endl;
k->makeSound();
delete	k;

const WrongCat		l;
std::cout << l.getType() << " " << std::endl;
l.makeSound();

}