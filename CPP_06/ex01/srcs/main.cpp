/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:18:03 by phautena          #+#    #+#             */
/*   Updated: 2025/09/04 13:44:07 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

int	main(void)
{
	uintptr_t	address;
	Data		*d = new Data;
	Data		*newData;
	d->value = 42;

	address = Serialize::serialize(d);
	newData = Serialize::deserialize(address);

	std::cout << "Original pointer: " << d << std::endl;
	std::cout << "Serialized address: " << address << std::endl;
	std::cout << "Deserialization: " << newData << std::endl;

	std::cout << "Original data value: " << d->value << std::endl;
	std::cout << "Serialized data value: " << newData->value << std::endl;

	return (0);
}
