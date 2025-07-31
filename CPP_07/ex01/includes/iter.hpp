/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:48:48 by phautena          #+#    #+#             */
/*   Updated: 2025/07/31 16:25:09 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdio>
# include <string>
# include <iostream>

template<typename T, typename F>
void	iter(T *array, size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

#endif
