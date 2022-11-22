/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:50:08 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/22 23:13:46 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NoOccurence : public std::exception
{
	const char *what() const throw() {return("No occurence found in tab !");}
};

template <typename T>
typename T::iterator	easyfind(T &tab, int j)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), j);

	if (it != tab.end())
		return (it);
	throw (NoOccurence());
	
	// typename T::iterator it;
	// for (it = tab.begin(); it != tab.end(); ++it)
	// {
	// 	if (*it == j)
	// 		return (it);
	// }
	// throw (NoOccurence());
}

#endif
