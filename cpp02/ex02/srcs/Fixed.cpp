/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:15:07 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/12 04:29:03 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void) :_stock(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called" << std::endl;
	_stock = i << _bits;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	_stock = roundf(f * (1 << _bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &wtf)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_stock = wtf._stock;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_stock);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

bool	Fixed::operator>(Fixed const &upper)
{
	if (_stock > upper.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &lower)
{
	if (_stock < lower.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &eupper)
{
	if (_stock > eupper.getRawBits())
		return (true);
	else if (_stock == eupper.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &elower)
{
	if (_stock < elower.getRawBits())
		return (true);
	else if (_stock == elower.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &egal)
{
	if (_stock == egal.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &diff)
{
	if (_stock == diff.getRawBits())
		return (false);
	else
		return (true);
}

Fixed	&Fixed::operator+(Fixed const &add)
{
	this->setRawBits(_stock + add.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator-(Fixed const &sup)
{
	this->setRawBits(_stock - sup.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator*(Fixed const &time)
{
	this->setRawBits(_stock * time.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator/(Fixed const &div)
{
	this->setRawBits(_stock / div.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->_stock++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;
	tmp._stock++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_stock--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp;
	tmp._stock--;
	return (tmp);
}

int	Fixed::min(Fixed &a, Fixed &b)
{
	if (a._stock < b._stock)
		return (a._stock);
	else
		return (b._stock);
}

const int	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._stock < b._stock)
		return (a._stock);
	else
		return (b._stock);
}

int	Fixed::max(Fixed &a, Fixed &b)
{
	if (a._stock > b._stock)
		return (a._stock);
	else
		return (b._stock);
}

const int	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._stock > b._stock)
		return (a._stock);
	else
		return (b._stock);
}
