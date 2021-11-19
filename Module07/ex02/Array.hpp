/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:33:54 by scass             #+#    #+#             */
/*   Updated: 2021/09/08 15:26:29 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int n;
	T*			 array;
public:
	Array(): n(0), array(NULL) {};
	Array(unsigned int n): n(n), array(new T[n]) {};
	Array(const Array<T>& copy)
	{
		array = NULL;
		n = 0;
		*this = copy;
		
	};
	Array& operator=(const Array<T>& other)
	{
		if(this == &other)
			return (*this);
		if (array != NULL)
			delete[] array;
		this->n = other.n;
		array = new T[n];
		for(int i = 0; i < n; i++)
			array[i] = other[i];
		return (*this);
	};
	T& operator[](int i) 
	{
		if (i < 0 || i >= n)
			throw std::exception();
		else
			return array[i];
	}
	const T& operator[](int i) const
	{
		if (i < 0 || i >= n)
			throw std::exception();
		else
			return array[i];
	}
	int size() const
	{
		return this->n;
	}
	~Array()
	{
		if(array)
			delete[] array;
	};
};

#endif