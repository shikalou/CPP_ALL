/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:51:32 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/13 16:13:20 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a = " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a = " <<  a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a = " <<  a << std::endl;
	std::cout << "'*' "<< b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	Fixed c(Fixed(8) / Fixed(0));
	std::cout << "'/' "<< c << std::endl;
	std::cout << "'+' " << a + c << std::endl;
	Fixed d(Fixed(84) / Fixed(2));
	std::cout << "'/' " << d << std::endl;
	std::cout << "'-' " << d - c << std::endl;
	std::cout << "min "<< Fixed::min(d, c) << std::endl;
	return (0);
}