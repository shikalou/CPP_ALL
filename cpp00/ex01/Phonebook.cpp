/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:17:00 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/21 14:41:59 by ldinaut          ###   ########.fr       */
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

int	Phonebook::CheckIndex(std::string str)
{
	int	i;

	i = 0;
	if (str.length() > 1)
		return (0);
	if (!isdigit(str[i]))
		return (0);
	return (1);
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
		if (std::cin.eof())
			return ;
	}
	if (Phonebook::CheckIndex(index))
	{
		const char *str = index.c_str();
		i = atoi(str);
		if (i < 8)
			_contactList[i].PrintDetail();
		else
			std::cout << "Wrong index" << std::endl;
	}
	else
		std::cout << "Wrong index" << std::endl;
}
