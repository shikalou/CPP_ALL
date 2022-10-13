/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:38:53 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/13 14:05:59 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
	Fixed(void);
	Fixed(Fixed const &src);// copy constructor
	Fixed(const int i);
	Fixed(const float f);
	~Fixed(void);
	// operator overload
	Fixed	&operator=(Fixed const &egal);
	bool	operator>(Fixed const &upper);
	bool	operator<(Fixed const &lower);
	bool	operator>=(Fixed const &eupper);
	bool	operator<=(Fixed const &elower);
	bool	operator==(Fixed const &egal);
	bool	operator!=(Fixed const &diff);
	Fixed	operator+(Fixed const &add);
	Fixed	operator-(Fixed const &sup);
	Fixed	operator*(Fixed const &time);
	Fixed	operator/(Fixed const &div);
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);

	private :
	int					_stock;
	static const int	_bits;
};

std::ostream &operator<<(std::ostream &outfile, Fixed const &wtf);

#endif