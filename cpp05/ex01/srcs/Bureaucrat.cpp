/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:03:07 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/01 18:00:40 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("default"), _grade(150)
{
	// std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) :_name(name)
{
	// std::cout << "Bureaucrat full constructor" << std::endl;
	(grade > 150) ? throw(GradeTooLowException()) : (grade < 1) ? throw(GradeTooHighException()) : _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) :_name(copy._name)
{
	// std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &egal)
{
	this->_grade = egal._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor" << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw(GradeTooHighException());
	std::cout << "increment " << _name << "'s grade" << std::endl;
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw(GradeTooLowException());
	std::cout << "decrement " << _name << "'s grade" << std::endl;
	_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro)
{
	os << buro.getName() << ", bureaucrat grade " << buro.getGrade() << ".";
	return (os);
}
