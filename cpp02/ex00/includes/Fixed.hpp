/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:38:53 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/10 17:19:22 by ldinaut          ###   ########.fr       */
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
	Fixed(Fixed const & src);

	// default destructor
	~Fixed(void);

	// copy assignement operator overload
	Fixed	&operator=(Fixed const & wtf);

	// returns the raw value of the fixed-point value.
	int		getsRawBits(int const raw);

	// sets the raw value of the fixed-point number.
	void	setRawBits(int const raw);

	private :
	int					_stock;
	static const int	_bits;
};

#endif