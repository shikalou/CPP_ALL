/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:17:15 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/08 15:02:11 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char, int, float or double.

#include <iostream>
#include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		Convert convert;
		convert.checkType(av[1]);
		return (0);
	}
	return (1);
}
