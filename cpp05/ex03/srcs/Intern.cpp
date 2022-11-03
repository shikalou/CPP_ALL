/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:34:08 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 22:21:25 by ldinaut          ###   ########.fr       */
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
	std::string formTab[3] = {"Shrubbery", "Robotomy", "Presidential"};
	void	(Form::*functionTab[3])() = {&Intern::newShruberry, &Intern::newRobotomy, &Intern::newPresidential};
}
