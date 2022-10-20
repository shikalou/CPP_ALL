/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:50:10 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 13:11:10 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(std::string name, int hp, int mana, int damage);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap	&operator=(FragTrap const &egal);
	void	highFivesGuys(void);
	int	getHP();

	private:
};

#endif