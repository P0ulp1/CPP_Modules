/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:31 by phautena          #+#    #+#             */
/*   Updated: 2025/09/11 13:51:23 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <string.h>

template <typename T, typename F>
void	iter(T &array, size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif
