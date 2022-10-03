/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:56:15 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/03 16:57:15 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av)
{
	Harl Karen;
	if (ac == 2)
	{
		std::string level(av[1]);
		Karen.complain(level);
		return (0);
	}
	std::cout << "Need only one parameter, try DEBUG, INFO, WARNING or ERROR" << std::endl;
	return (1);
}