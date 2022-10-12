/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:15:07 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/11 23:50:25 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void) :_stock(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_stock = i << _bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_stock = roundf(f * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &wtf)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_stock = wtf._stock;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_stock);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_stock = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_stock / ((float)(1 << _bits)));
}

int	Fixed::toInt(void) const
{
	return (_stock >> _bits);
}

std::ostream &operator<<(std::ostream &outfile, Fixed const &wtf)
{
	outfile << wtf.toFloat();
	return (outfile);
}
