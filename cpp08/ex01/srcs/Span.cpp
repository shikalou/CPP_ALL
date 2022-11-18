/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:48:53 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/18 19:40:02 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() :_max(0)
{
}

Span::Span(unsigned int n) :_max(n)
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span	&Span::operator=(const Span &egal)
{
	this->_max = egal._max;
	this->_tab = egal._tab;
	return (*this);
}

void	Span::addNumber(int i)
{
	if (_tab.size() < _max)
		_tab.push_back(i);
	else
		throw (SpanFull());
}

unsigned int	Span::longestSpan()
{
	if (_tab.size() < 2)
		throw (solo());
	std::sort(_tab.begin(), _tab.end());
	return (_tab.back() - _tab.front());
}

unsigned int	Span::shortestSpan()
{
	int	ret = 0;
	int	tmp = 0;

	if (_tab.size() < 2)
		throw (solo());
	std::vector<int>::iterator it;
	std::sort(_tab.begin(), _tab.end());
	ret = _tab[1] - _tab[0];
	for (it = _tab.begin() + 1; it != _tab.end(); ++it)
	{
		tmp = *(it) - *(it - 1);
		if (ret >= tmp)
			ret = tmp;
	}
	return (ret);
}

void	Span::improvedAdd(unsigned int n)
{
	if (n > _max || (_tab.size() + n) > _max)
		throw(SpanFull());
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for (unsigned int i = 0; i < n; ++i)
	{
		int j = (rand() % (_max + n));
		_tab.insert(_tab.end(), j);
	}
}

void	Span::printTab()
{
	std::vector<int>::iterator it;

	std::cout << "-----" << std::endl;
	for (it = _tab.begin(); it != _tab.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "-----" << std::endl;
}
