/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:55:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/01 18:03:54 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Luna("Luna", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Julien("Julien", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	Bureaucrat Louis("Louis", 1);
	std::cout << Louis << std::endl;
	try
	{
		Louis.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	try
	{
		Louis.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << Louis << std::endl;

	Bureaucrat Marine("Marine", 5);
	std::cout << Marine << std::endl;
	try
	{
		Marine.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << Marine << std::endl;
}