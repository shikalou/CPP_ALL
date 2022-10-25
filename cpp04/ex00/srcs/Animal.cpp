/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:37:33 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 11:44:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string newType = "Animal") :_type(newType)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(Animal const &egal)
{
	_type = egal._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Random animal sounds" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
