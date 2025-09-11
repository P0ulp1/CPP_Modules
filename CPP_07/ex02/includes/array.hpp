/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:31 by phautena          #+#    #+#             */
/*   Updated: 2025/09/11 16:59:05 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stddef.h>
# include <iostream>

template <typename T>
class	Array
{
	public:
		Array(void);
		~Array(void);
		Array(unsigned int n);
		Array(const Array &copy);
		Array	&operator=(const Array &rhs);

	private:
		T *_array;
};

# include "array.tpp"

#endif
