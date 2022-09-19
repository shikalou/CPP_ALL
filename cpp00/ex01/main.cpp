/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:04:23 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/19 18:02:56 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	cmd;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Choose between ADD, SEARCH or EXIT" << std::endl << "enter cmd > ";
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.CreateContact(i);
			i++;
		}
		else if (cmd == "SEARCH")
		{
			phonebook.PrintContact();
		}
		else if (cmd == "EXIT")
			return (0);
	}
}