/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:25:39 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/18 19:35:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &egal);
		~Span();

		void			addNumber(int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			improvedAdd(unsigned int n);
		void			printTab();

		class	SpanFull : public std::exception
		{
			const char *what() const throw() {return ("Span is already at maximum capacity !");}
		};

		class solo : public std::exception
		{
			const char *what() const throw() {return ("Only one value in span !");}
		};

	private:
		unsigned int			_max;
		std::vector<int>		_tab;
};

#endif
