/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:20:52 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 18:56:57 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat name constructor called" << std::endl;
	_type="cat";
	_brain = new Brain();
}

Cat::Cat(std::string name = "Cat"): Animal(name)
{
	std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(Cat const &egal)
{
	_type = egal._type;
	if (_brain)
		delete _brain;
	this->_brain = new Brain(*egal._brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	if (_brain)
		delete _brain;
}

std::string	Cat::getType() const
{
	return (this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}