/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:34:08 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/04 15:43:47 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(Intern const &egal)
{
	(void)egal;
	return (*this);
}

Form	*Intern::newShruberry(std::string targetName)
{
	return (new ShrubberyCreationForm(targetName));
}

Form	*Intern::newRobotomy(std::string targetName)
{
	return (new RobotomyRequestForm(targetName));
}

Form	*Intern::newPresidential(std::string targetName)
{
	return (new PresidentialPardonForm(targetName));
}

Form	*Intern::makeForm(std::string formName, std::string targetName)
{
	std::string formTab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(Intern::*functionTab[3])(std::string) = {&Intern::newShruberry, &Intern::newRobotomy, &Intern::newPresidential};

	for (int i = 0; i < 4; i++)
	{
		if (formName == formTab[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*functionTab[i])(targetName));
		}
	}
	throw(FormNameNotFound());
}

const char *Intern::FormNameNotFound::what() const throw()
{
	return ("Form name not found !");
}
