/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:06:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 18:49:17 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);

	Zombie* newZombie(std::string name);

	void randomChump(std::string name);

	Zombie* zombieHorde(int N, std::string name);
	
	private:
	std::string _name;
};

#endif
