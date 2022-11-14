/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:10:13 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/14 17:36:02 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int i);
		~Array();
		Array(const Array &copy);
		Array &operator=(const Array &egal);
		T &operator[](unsigned int i);

		unsigned int	size(void) const;

		class BadIndex : public std::exception
		{
			const char *what() const throw();
		};

	private:
		T				*_tab;
		unsigned int	_size;
};

#include "Array.tpp"

#endif
