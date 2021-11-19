/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:04:55 by scass             #+#    #+#             */
/*   Updated: 2021/09/15 11:23:13 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(): N(0)
{
}

Span::Span(unsigned int N): N(N)
{
}
Span::Span(const Span& copy)
{
	*this = copy;
}

Span& Span::operator=(const Span& other)
{
	if(&other == this)
		return (*this);
	this->N = other.N;
	this->number = other.number;
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->number.size() == N)
	{
		std::cerr << "Array is full!" << std::endl;
		throw std::exception();
	}
	else
		this->number.push_back(n);
}

void Span::addNumber(int n, unsigned int count)
{
	if ((this->number.size() + count) > N)
	{
		std::cerr << "Array is full!" << std::endl;
		throw std::exception();
	}
	else
	{
		std::vector <int>::iterator it = this->number.end();
		this->number.insert(it, count, n);
	}
}

int Span::shortestSpan()
{
	if (this->number.size() < 2)
	{
		std::cerr << "There is no span to find" << std::endl;
		throw std::exception();
	}
	std::vector <int> tmp = this->number;
	std::vector <int>::iterator it;
	std::sort(tmp.begin(), tmp.end());
	int result = 2147483647;
	for(it = tmp.begin(); it < (tmp.end() - 1); ++it)
	{
		int min = *(it + 1) - *it;
		if (min < result)
			result = min;
	}
	return result;
}

int Span::longestSpan()
{
	if (this->number.size() < 2)
	{
		std::cerr << "There is no span to find" << std::endl;
		throw std::exception();
	}
	std::vector <int> tmp = this->number;
	std::sort(tmp.begin(), tmp.end());
	int result = abs(*(tmp.end() - 1) - *tmp.begin());
	return result;
}