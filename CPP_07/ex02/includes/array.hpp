/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:31 by phautena          #+#    #+#             */
/*   Updated: 2025/10/01 16:22:24 by phautena         ###   ########.fr       */
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

		unsigned int	size(void) const;
		T				&operator[](unsigned int idx);
		const T			&operator[](unsigned int idx) const;

		class IndexOutOfBound : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		T				*_array;
		unsigned int	_size;
};

# include "array.tpp"

#endif
