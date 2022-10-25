/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:39:25 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 16:07:20 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat name constructor called" << std::endl;
	_type="Wrongcat";
}

WrongCat::WrongCat(std::string name = "WrongCat"): WrongAnimal(name)
{
	std::cout << "WrongCat name constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(WrongCat const &egal)
{
	_type = egal._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->_type);
}

void	WrongCat::makeSound() const
{
	std::cout << "wrong Miaou" << std::endl;
}