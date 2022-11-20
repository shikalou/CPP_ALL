/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:58:52 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/20 22:34:52 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
MutantStack<T>::MutantStack()
{
	// std::cout << "default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	// std::cout << "destructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T>	&MutantStack::operator=(const MutantStack &egal)
{
	(void)egal;
	return (*this);
}

template <typename T>
MutantStack<T>::iterator	MutantStack::begin()
{
	return (std::begin(c));
}

template <typename T>
MutantStack<T>::iterator	MutantStack::end()
{
	return (std::end(c));
}

#endif