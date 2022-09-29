/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:46:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/29 18:14:56 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		notsed(av[1], av[2], av[3]);
		return (0);
	}
	std::cerr << "wrong argument count" << std::endl;
	return (1);
}