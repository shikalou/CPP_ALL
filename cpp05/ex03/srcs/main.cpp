/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:55:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/04 15:25:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	Bureaucrat Mehdi("Mehdi", 50);
	Bureaucrat Lucie("Lucie", 130);
	Bureaucrat Julien("Julien", 4);

	PresidentialPardonForm president("Mehdi");
	Julien.executeForm(president);

	ShrubberyCreationForm arbre("Julien");
	Lucie.executeForm(arbre);

	RobotomyRequestForm bot("Lucie");
	Mehdi.executeForm(bot);
	for (int i = 0; i <= 6; i++)
		Mehdi.incrementGrade();
	std::cout << Mehdi << std::endl;
	std::cout << bot << std::endl;
	Mehdi.executeForm(bot);
	{
		Intern someRandomIntern;
		Form* rrf;
		try
		{
			rrf = someRandomIntern.makeForm("robotomy reques", "Bender");
			Mehdi.executeForm(*rrf);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	Intern	Marine;
	Form	*tree;
	try
	{
		tree = Marine.makeForm("shrubbery creation", "garden");
		Julien.executeForm(*tree);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete tree;
}