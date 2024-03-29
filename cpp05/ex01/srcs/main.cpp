/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:55:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/02 15:26:12 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Bureaucrat Medhi("Medhi", 50);
	
	Form impots("impots", 130, 130);

	Form matmut("matmut", 34, 35);

	std::cout << impots << std::endl << std::endl;
	std::cout << matmut << std::endl << std::endl;

	try
	{
		Bureaucrat Haru("Haru", 149);
		Haru.signForm(impots);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	try
	{
		Medhi.signForm(impots);
		Medhi.signForm(matmut);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << impots << std::endl;
}