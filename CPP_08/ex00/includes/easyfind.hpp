/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:38:37 by phautena          #+#    #+#             */
/*   Updated: 2025/10/06 13:01:37 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <list>
# include <exception>


template <typename T>
typename T::const_iterator easyfind(const T &container, const int &x)
{
	typename T::const_iterator it;

	for (it = container.begin(); it != container.end(); it++)
	{
		if (*it == x)
		{
			std::cout << "[+] easyfind found the specified occurence (" << x << ")" << std::endl;
			return (it);
		}
	}
	std::cout << "[-] easyfind couldn't find the specified occurence (" << x << ")" << std::endl;
	return (it);
}

#endif
