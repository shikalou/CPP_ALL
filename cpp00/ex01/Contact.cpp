/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:16:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/19 19:12:38 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void	Contact::SetContact()
{
	do
	{
		std::cout << "First name ?" << std::endl;
		getline(std::cin, _firstname);
	} while (_firstname.empty());
	do
	{
		std::cout << "Last name ?" << std::endl;
		getline(std::cin, _lastname);
	} while (_lastname.empty());
	do
	{
		std::cout << "Nickname ?" << std::endl;
		getline(std::cin, _nickname);
	} while (_nickname.empty());
	do
	{
		std::cout << "Phone number ?" << std::endl;
		getline(std::cin, _phone);
	} while (_phone.empty());
	do
	{
		std::cout << "Darkest secret ?" << std::endl;
		getline(std::cin, _secret);
	} while (_secret.empty());
}

std::string	Contact::Resize(std::string str)
{
	unsigned	len;
	int			i;
	std::string	ret;

	len = str.length();
	i = 0;
	if (len > 10)
	{
		ret = str.substr(0, 9);
		ret += ".";
	}
	else
	{
		ret += str;
		while ((i + len) < 10)
		{
			ret += " ";
			i++;
		}
	}
	return (ret);
}

void	Contact::Print(int i)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;

	firstname = Resize(_firstname);
	lastname = Resize(_lastname);
	nickname = Resize(_nickname);
	std::cout << "|" << i << "         |" << firstname << "|" << lastname << "|" << nickname << "|" << std::endl;
}

void	Contact::PrintDetail()
{
	std::cout << "First name : " << _firstname << std::endl;
	std::cout << "Last name : " << _lastname << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " <<_phone << std::endl;
	std::cout << "Darkest secret : " <<_secret << std::endl;
}
