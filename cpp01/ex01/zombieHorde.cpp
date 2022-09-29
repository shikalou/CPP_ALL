/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:21:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/28 13:37:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creer une horde de N zombie tous appele name
Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*ret = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ret[i]._name = name;
	}
	return (ret);
}