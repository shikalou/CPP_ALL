/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:51:31 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/02 15:25:18 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string name, const unsigned int sign, const unsigned int exec) :_name(name), _signGrade(sign), _execGrade(exec)
{
	// std::cout << "Form full constructor" << std::endl;
	_isSigned = false;
}

Form::~Form()
{
	// std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &copy) :_name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	// std::cout << "Form copy constructor" << std::endl;
	*this = copy;
}

Form &Form::operator=(const Form &egal)
{
	this->_isSigned = egal._isSigned;
	return (*this);
}

const std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getStatus() const
{
	return (_isSigned);
}

unsigned int	Form::getGradeS() const
{
	return (_signGrade);
}

unsigned int	Form::getGradeE() const
{
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat &buro)
{
	if (!_isSigned)
	{
		if (buro.getGrade() > _signGrade)
			throw(GradeTooHighException());
		_isSigned = true;
		return ;
	}
	std::cout << "Document " << _name << " is already signed." << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Form &doc)
{
	os << doc.getName() << " can be signed by " << doc.getGradeS() << " minimumm ";
	if (doc.getStatus())
	{
		std::cout << "and is signed already.";
		return (os);
	}
	std::cout << "and is not signed yet.";
	return (os);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("document's grade is too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("document's grade is too low !");
}
