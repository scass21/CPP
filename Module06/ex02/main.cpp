/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:49:00 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 11:06:48 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	srand(time(0));
	switch (rand() % 3)
	{
	case 0:
		std::cout << YELL << "Generate A" << RESET << std::endl;
		return new A;
		break;
	case 1:
		std::cout << YELL << "Generate B" << RESET << std::endl;
		return new B;
		break;
	default:
		std::cout << YELL << "Generate C" << RESET << std::endl;
		return new C;
	}
}

void identify(Base* p) {
	if (!p) 
		return;
	if (dynamic_cast<A*>(p))
		std::cout << YELL << "Identify Base*: A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << YELL << "Identify Base*: B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << YELL << "Identify Base*: C" << RESET << std::endl;
}

void identify(Base& p) 
{
	try 
	{
		p = dynamic_cast<A&>(p);
		std::cout << YELL << "Identify Base&: A" << RESET << std::endl;
	}
	catch (std::exception& e)
	{
		// std::cout << "Impossible to identify Base& A: exception " << e.what() << std::endl;
	}
	try 
	{
		p = dynamic_cast<B&>(p);
		std::cout << YELL << "Identify Base&: B" << RESET << std::endl;
	}
	catch (std::exception& e) 
	{
		// std::cout << "Impossible to identify Base& B: exception " << e.what() << std::endl;
	}
	try 
	{
		p = dynamic_cast<C&>(p);
		std::cout << YELL << "Identify Base&: C" << RESET << std::endl;
	}
	catch (std::exception& e)
	{
		// std::cout << "Impossible to identify Base& C: exception " << e.what() << std::endl;
	}
}

int main()
{
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;

	return 0;
}