/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:22:20 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 17:22:23 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &egal)
{
	this->_isSigned = egal._isSigned;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _execGrade)
		throw (GradeTooHighException());
	std::cout << "* Drilling noise *" << std::endl;

	std::srand(static_cast<unsigned int>(std::time(NULL)));

	int i = (rand() % 2);
	if (i == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << "'s robotomy has failed." << std::endl;
}
