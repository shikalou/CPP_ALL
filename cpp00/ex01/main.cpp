/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:00:40 by ldinaut           #+#    #+#             */
/*   Updated: 2022/08/18 00:14:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main()
{
	Phonebook toto;
	std::string cmd;
	int	i;

	i = 0;
	while (1)
	{
		std::cout << "enter cmd > ";
		getline(std::cin, cmd);
	
		if (cmd == "ADD" && i < 8)
		{
			toto.createContact(i);
			i++;
		}
		else if (cmd == "SEARCH")
			toto.printContact();
		else if (cmd == "EXIT")
			return (0);
	std::cout << "" << std::endl;
	}
	return (0);
}