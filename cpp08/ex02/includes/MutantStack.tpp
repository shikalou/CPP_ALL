/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:58:52 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/21 16:28:16 by ldinaut          ###   ########.fr       */
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
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &egal)
{
	(void)egal;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

#endif