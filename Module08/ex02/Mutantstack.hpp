/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:29:06 by scass             #+#    #+#             */
/*   Updated: 2021/11/19 10:30:47 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>
#include <deque>
#include <iterator>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){}
	MutantStack(const MutantStack& copy)
	{
		*this = copy;
	}
	MutantStack& operator=(const MutantStack& other)
	{
		std::stack<T>::operator=(other);
		return (*this);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin()
	{
		return (this->c.begin()); 
	}
	iterator	end()
	{
		return (this->c.end());
	}	
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator	cbegin()
	{
		return (this->c.begin()); 
	}
	const_iterator	cend()
	{
		return (this->c.end());
	}	
	virtual ~MutantStack(){}
};

#endif