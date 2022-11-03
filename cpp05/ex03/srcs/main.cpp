/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:55:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 16:15:45 by ldinaut          ###   ########.fr       */
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
	Bureaucrat Lucie("Lucie", 130);
	Bureaucrat Julien("Julien", 4);

	PresidentialPardonForm president(Medhi);
	Julien.executeForm(president);

	ShrubberyCreationForm arbre(Julien);
	Lucie.executeForm(arbre);

	RobotomyRequestForm bot(Lucie);
	Medhi.executeForm(bot);
	for (int i = 0; i <= 6; i++)
		Medhi.incrementGrade();
	std::cout << Medhi << std::endl;
	std::cout << bot << std::endl;
	Medhi.executeForm(bot);
}