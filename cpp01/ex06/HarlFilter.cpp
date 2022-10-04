/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:59:45 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/04 10:47:45 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == tab[i])
		{
			switch (i)
			{
				case 0:
					debug();
				case 1:
					info();
				case 2:
					warning();
				case 3:
					error();
			}
			return ;
		}
	}
	std::cout << " [ Probably complaining about insignificant problems ] " << std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << "\n\n";
}