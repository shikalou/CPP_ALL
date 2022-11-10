/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:09:38 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/10 19:27:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main()
{
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = i;
	}
	::iter(tab, 9, aff<int>);

	std::cout << std::endl;

	char tab2[] = "qwertyuiop";
	::iter(tab2, 9, aff<char>);

	std::cout << std::endl;
	
	::iter(tab2, 9, toUp<char>);
	::iter(tab2, 9, aff<char>);
}