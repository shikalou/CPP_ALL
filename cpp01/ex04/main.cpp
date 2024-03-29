/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:46:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/03 14:24:45 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	infile(av[1]);
		std::string	s1(av[2]);
		std::string	s2(av[3]);
		notsed(infile, s1, s2);
		return (0);
	}
	std::cerr << "wrong argument count" << std::endl;
	return (1);
}