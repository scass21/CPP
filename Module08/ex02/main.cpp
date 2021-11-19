/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 00:49:33 by scass             #+#    #+#             */
/*   Updated: 2021/11/19 10:31:27 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main()
{
	/*subject test*/
	std::cout << "\033[33mMutantStack<int>\033[0m" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "\033[36mmstack top - \033[0m" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "\033[36mmstack size - \033[0m" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\033[33mTest copy constructor:\033[0m" << std::endl;
	std::stack<int> copy(mstack);
	std::cout << "\033[36mmstack size - \033[0m" << mstack.size() << std::endl;
	std::cout << "\033[36mmstack top - \033[0m" << mstack.top() << std::endl;
	std::cout << "\033[36mcopy size - \033[0m" << copy.size() << std::endl;
	std::cout << "\033[36mcopy top - \033[0m" << copy.top() << std::endl;
	
	/* other tests*/
	
	std::cout << "\033[33mMutantStack<float>\033[0m" << std::endl;
	MutantStack<float> floatstack;
	floatstack.push(5.52);
	floatstack.push(17.46);
	std::cout << "\033[36mfloatstack top - \033[0m" << floatstack.top() << std::endl;
	floatstack.pop();
	std::cout << "\033[36mfloatstack size - \033[0m" << floatstack.size() << std::endl;
	floatstack.push(3.46);
	MutantStack<float>::const_iterator it1 = floatstack.cbegin();
	MutantStack<float>::const_iterator ite1 = floatstack.cend();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	std::cout << "\033[33mTest assignation operator:\033[0m" << std::endl;
	std::stack<float> assignation;
	assignation = floatstack;
	std::cout << "\033[36mfloatstack size - \033[0m" << floatstack.size() << std::endl;
	std::cout << "\033[36mfloatstack top - \033[0m" << floatstack.top() << std::endl;
	std::cout << "\033[36massignation size - \033[0m" << assignation.size() << std::endl;
	std::cout << "\033[36massignation top - \033[0m" << assignation.top() << std::endl;

	std::cout << "\033[33mMutantStack<char>\033[0m" << std::endl;
	MutantStack<char> charstack;
	charstack.push('a');
	charstack.push('b');
	std::cout << "\033[36mcharstack top - \033[0m" << charstack.top() << std::endl;
	std::cout << "\033[36mcharstack size - \033[0m" << charstack.size() << std::endl;
	MutantStack<char>::iterator it2 = charstack.begin();
	MutantStack<char>::iterator ite2 = charstack.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "\033[33mMutantStack<int, std::list<int>> \033[0m" << std::endl;
	MutantStack<int, std::list<int> > liststack;
	liststack.push(21);
	liststack.push(22);
	std::cout << "\033[36mliststack top - \033[0m" << liststack.top() << std::endl;
	std::cout << "\033[36mliststack size - \033[0m" << liststack.size() << std::endl;
	MutantStack<int, std::list<int> >::iterator it3 = liststack.begin();
	MutantStack<int, std::list<int> >::iterator ite3 = liststack.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	return 0;
}