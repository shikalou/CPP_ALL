/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:14:07 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/10 19:28:44 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *tab, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
	{
		f(tab[i]);
	}
}

template <typename T>
void	aff(T &i)
{
	std::cout << "tab[i] = " << i << std::endl;
}

template <typename T>
void	toUp(T &tab)
{
	if (tab >= 'a' && tab <= 'z')
		tab = tab - 32;
}

#endif