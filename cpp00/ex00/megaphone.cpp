/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:53:14 by ldinaut           #+#    #+#             */
/*   Updated: 2022/08/16 20:56:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	strup(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		std::cout << (char)std::toupper(str[i]);
	}
}

int	main(int ac, char *av[])
{
	switch (ac)
	{
		case 1:
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			break ;
		default:
			for (int i = 1; i < ac; i++)
			{
				strup(av[i]);
			}
			std::cout << std::endl;
	}
	return (0);
}