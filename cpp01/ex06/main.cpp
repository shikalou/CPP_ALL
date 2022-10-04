/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:13 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/04 10:46:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

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