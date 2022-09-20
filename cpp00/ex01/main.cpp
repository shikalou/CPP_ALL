/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:04:23 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/20 11:40:58 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	cmd;

	while (!std::cin.eof())
	{
		std::cout << "Choose between ADD, SEARCH or EXIT" << std::endl << "Enter cmd > ";
		getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (cmd == "ADD")
			phonebook.CreateContact();
		else if (cmd == "SEARCH")
			phonebook.PrintContact();
		else if (cmd == "EXIT")
			return (0);
	}
}