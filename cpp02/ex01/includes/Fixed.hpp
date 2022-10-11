/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:38:53 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/11 17:36:30 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
	// constructors
	Fixed(void);
	Fixed(Fixed const &src);// copy constructor
	Fixed(const int i);
	Fixed(const float f);

	// default destructor
	~Fixed(void);

	// copy assignement operator overload
	Fixed	&operator=(Fixed const &wtf);
	// returns the raw value of the fixed-point value.
	int		getRawBits(void) const;
	// sets the raw value of the fixed-point number.
	void	setRawBits(int const raw);
	// converts the fixed-point value to a floating-point value.
	float	toFloat(void) const;
	// converts the fixed-point value to an integer value.
	int		toInt(void) const;

	private :
	int					_stock;
	static const int	_bits;
};

std::ostream &operator<<(std::ostream &outfile, Fixed const &wtf);

#endif