/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:34:08 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 17:57:07 by ldinaut          ###   ########.fr       */
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
}

Form	*Intern::makeForm(std::string formName, std::string targetName)
{
	std::string formTab[3] = {"Shrubbery", "Robotomy", "Presidential"};
	void	(Form::*functionTab[3])() = {&Form::execute, RobotomyRequestForm::execute, PresidentialPardonForm::execute};
}
