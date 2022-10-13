/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:15:07 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/13 15:53:12 by ldinaut          ###   ########.fr       */
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

Fixed	Fixed::operator+(Fixed const &add)
{
	return (Fixed(this->toFloat() + add.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &sup)
{
	return (Fixed(this->toFloat() - sup.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &time) 
{
	return (Fixed(time.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/(Fixed const &div)
{
	if (div._stock)
		return (Fixed(this->toFloat() / div.toFloat()));
	std::cerr << "cannot divide by 0" << std::endl;
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->_stock++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_stock++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_stock--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_stock--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._stock < b._stock)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._stock < b._stock)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._stock > b._stock)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	
	if (a._stock > b._stock)
		return (a);
	else
		return (b);
}
