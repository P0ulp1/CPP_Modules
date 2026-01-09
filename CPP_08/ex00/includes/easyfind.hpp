/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:38:37 by phautena          #+#    #+#             */
/*   Updated: 2026/01/09 14:51:22 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <list>
# include <exception>
# include <sstream>
# include <vector>
# include <algorithm>


template <typename T>
typename T::const_iterator easyfind(const T &container, const int &x)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), x);

	if (it != container.end())
	{
		std::cout << "[+] easyfind found occurence: " << *it << std::endl;
		return (it);
	}

	std::ostringstream oss;
	oss << "[-] easyfind couldn't find the specified occurence (" << x << ")";
	throw std::out_of_range(oss.str());
}

#endif
