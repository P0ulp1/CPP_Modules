/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:36:44 by phautena          #+#    #+#             */
/*   Updated: 2025/09/11 17:01:31 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL)
{
	std::cout << "Array constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	for (int i = 0; i < n; i++)
		_array[i] = NULL;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	copy->_array = 0;
}
