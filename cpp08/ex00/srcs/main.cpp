/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:50:10 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/23 00:28:28 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <deque>

int	main()
{
	typedef std::vector<int>::iterator it;
	std::vector<int> toto;
	try
	{	std::cout << "try with an empty tab !" << std::endl << std::endl;
		it ret = easyfind(toto, 5);
		std::cout << *ret << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<std::endl << "AVEC UN VECTOR DE INT" << std::endl << std::endl << std::endl;
	std::vector<int> tab(3, 6);
	tab.push_back(1);
	for(int i = 0; i < (int)tab.size(); i++)
	{
		std::cout << "vector<int> tab[" << i << "]" << " = " << tab[i] << std::endl;
	}

	std::cout << std::endl;

	try
	{
		it ret = easyfind(tab, 5);
		std::cout << *ret << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "add a new int 5 to the tab and try again" << std::endl << std::endl;
	
	tab.push_back(5);

	for(int i = 0; i < (int)tab.size(); i++)
	{
		std::cout << "vector<int> tab[" << i << "]" << " = " << tab[i] << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		it ret = easyfind(tab, 5);
		std::cout << *ret << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	typedef std::deque<int>::iterator it2;
	std::cout << std::endl << std::endl << "AVEC UN DEQUE DE INT" << std::endl << std::endl << std::endl;

	std::deque<int> tab2(2, 2);
	tab2.push_front(9);

	for(int i = 0; i < (int)tab2.size(); i++)
	{
		std::cout << "deque<int> tab[" << i << "]" << " = " << tab2[i] << std::endl;
	}
	std::cout << std::endl;

	try
	{
		it2 ret3 = easyfind(tab2, 10);
		std::cout << *ret3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "add a new int 10 to the tab and try again" << std::endl << std::endl;
	tab2.push_front(10);

	for(int i = 0; i < (int)tab2.size(); i++)
	{
		std::cout << "deque<int> tab[" << i << "]" << " = " << tab2[i] << std::endl;
	}

	std::cout << std::endl;

	try
	{
		it2 ret2 = easyfind(tab2, 10);
		std::cout << *ret2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}