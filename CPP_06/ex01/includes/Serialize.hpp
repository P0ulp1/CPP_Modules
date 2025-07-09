/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:18:17 by phautena          #+#    #+#             */
/*   Updated: 2025/07/09 15:33:53 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include "../includes/Data.hpp"
# include <iostream>
# include <stdint.h>

class	Serialize
{
	public:
		Serialize(void);
		Serialize(const Serialize& copy);
		Serialize	&operator=(const Serialize& rhs);
		virtual ~Serialize(void) = 0;

		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
