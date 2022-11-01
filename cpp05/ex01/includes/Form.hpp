/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:19:52 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/01 19:10:26 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	public :
		Form(std::string name = "default", unsigned int sign = 150, unsigned int exec = 150);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &egal);

		const std::string	getName() const;
		bool				getStatus() const;
		const unsigned int	getGradeS() const;
		const unsigned int	getGradeE() const;
		void				beSigned(Bureaucrat &buro);

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

	private :
		const std::string	_name;
		bool				_isSigned;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

std::ostream &operator<<(std::ostream &os, const Form &doc);

#endif