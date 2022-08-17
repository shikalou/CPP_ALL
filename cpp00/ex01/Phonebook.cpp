/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:11:51 by ldinaut           #+#    #+#             */
/*   Updated: 2022/08/18 00:13:06 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
// j'implemente les methodes ici

Phonebook::Phonebook()
{

}

void	Phonebook::createContact(int i)
{
	Listcontact[i].FillContact();
}

void	Phonebook::printContact()
{
	std::string	index;
	int			i;
	int			j;

	i = 0;
	std::cout << "|--index---|--first---|---last---|-nickname-|" << std::endl;
	while (i < 8)
	{
		Listcontact[i].Print(i);
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	
	while (1)
	{
		std::cout << "select index : " << std::endl;
		std::cin >> index;
		j = std::stoi(index);
		if (j < 8)
		{
			Listcontact[j].PrintDetail();
			break ;
		}
	}
		std::cout << "" << std::endl;
}
