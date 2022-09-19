/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:17:00 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/19 19:48:10 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() :_index(0)
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::CreateContact()
{
	_contactList[_index].SetContact();
	if (_index + 1 == 8)
		_index = 0;
	else
		_index++;
}

void	Phonebook::PrintContact()
{
	std::string	index;
	int			i;

	i = 0;
	std::cout << "|--index---|--first---|---last---|-nickname-|" << std::endl;
	while (i < 8)
	{
		_contactList[i].Print(i);
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (index.empty())
	{
		std::cout << "Select an index >" << std::endl;
		getline(std::cin, index);
	}
	i = std::stoi(index);
	if (i < 8)
	{
		_contactList[i].PrintDetail();
	}
}