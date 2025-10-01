/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:36:44 by phautena          #+#    #+#             */
/*   Updated: 2025/10/01 16:07:57 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

template <typename T>
Array<T>::Array(void) : _size(0), _array(NULL)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
	delete [] _array;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array parameterized constructor called" << std::endl;
	_size = n;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	std::cout << "Array copy constructor called" << std::endl;
	_size = copy._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		delete [] _array;
		_size = rhs._size;
		_array = new T(_size);
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
T	&Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size)
		throw IndexOutOfBound();
	else
		return (_array[idx]);
}

template <typename T>
const char	*Array<T>::IndexOutOfBound::what() const throw()
{
	return ("The specified index is out of bound");
}
