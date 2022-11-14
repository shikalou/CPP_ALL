/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:17:57 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/14 18:12:40 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

// #include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "default constructor called" << std::endl;
	_tab = new T[0]();
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int i)
{
	_tab = new T[i]();
	_size = i;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "destructor called" << std::endl;
	delete [] _tab;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &egal)
{
	_tab = new T[egal._size]();
	_size = egal._size;
	for (unsigned int i = 0; i < egal._size; i++)
	{
		_tab[i] = egal._tab[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw (BadIndex());
	return (this->_tab[i]);
}

template <typename T>
const char *Array<T>::BadIndex::what() const throw()
{
	return ("index is out of bounds !");
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif
