/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:12:37 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 18:16:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor" << std::endl;
}

Zombie::Zombie(std::string name) :_name(name)
{
	std::cout << "constructor with arguments" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor for " << _name << std::endl;
}

// Annonce les zombies
void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
