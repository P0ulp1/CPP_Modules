/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:25:01 by phautena          #+#    #+#             */
/*   Updated: 2025/05/21 15:28:00 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>

class	WrongCat
{
	protected:
		std::string	_type;
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat	&operator=(const WrongCat &rhs);
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
