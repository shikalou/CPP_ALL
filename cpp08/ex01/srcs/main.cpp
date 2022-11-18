/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:39:23 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/18 19:49:56 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	spanOne(5);

	try
	{
		spanOne.addNumber(6);
		spanOne.addNumber(3);
		spanOne.addNumber(17);
		spanOne.addNumber(9);
		spanOne.addNumber(11);

		// spanOne.printTab();
		std::cout << spanOne.shortestSpan() << std::endl;
		std::cout << spanOne.longestSpan() << std::endl;

		spanOne.addNumber(99); // throw exception
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl <<  "try with a new vector of size 1" << std::endl;

	Span	spanTwo(1);

	try
	{
		spanTwo.addNumber(8);
		// spanTwo.printTab();

		std::cout << spanTwo.shortestSpan() << std::endl;
		std::cout << spanTwo.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "try my new function improvedAdd" << std::endl;

	Span	test3(15);

	try
	{
		test3.improvedAdd(6);
		test3.improvedAdd(4);
		// test3.printTab();

		std::cout << test3.shortestSpan() << std::endl;
		std::cout << test3.longestSpan() << std::endl;

		std::cout << std::endl << "add 3 more values" << std::endl;
		test3.improvedAdd(3);
		// test3.printTab();

		std::cout << test3.shortestSpan() << std::endl;
		std::cout << test3.longestSpan() << std::endl;

		std::cout << std::endl << "try adding 3 more values again" << std::endl;
		test3.improvedAdd(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
