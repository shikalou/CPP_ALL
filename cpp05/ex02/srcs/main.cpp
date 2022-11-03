/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:55:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 11:19:50 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
}