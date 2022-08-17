/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:45:03 by ldinaut           #+#    #+#             */
/*   Updated: 2022/08/18 00:08:52 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

void Contact::FillContact()
{
	std::cout << "first name :" << std::endl;
	getline(std::cin, m_firstname);
	std::cout << "last name :" << std::endl;
	getline(std::cin, m_lastname);
	std::cout << "nickname :" << std::endl;
	getline(std::cin, m_nickname);
	std::cout << "phone number :" << std::endl;
	getline(std::cin, m_phone);
	std::cout << "secret :" << std::endl;
	getline(std::cin, m_secret);
}

std::string RemakeStr(std::string str)
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
	std::string FirstN;
	std::string LastN;
	std::string NickN;
	
	FirstN = RemakeStr(m_firstname);
	LastN = RemakeStr(m_lastname);
	NickN = RemakeStr(m_nickname);
	std::cout << "|" << i << "         |" << FirstN << "|" << LastN << "|" << NickN << "|" <<std::endl;
}

void	Contact::PrintDetail()
{
	std::cout << "first name : " << m_firstname << std::endl;
	std::cout << "last name : " << m_lastname << std::endl;
	std::cout << "nickname : " << m_nickname<< std::endl;
	std::cout << "phone number : " << m_phone << std::endl;
	std::cout << "secret : " << m_secret << std::endl;
}