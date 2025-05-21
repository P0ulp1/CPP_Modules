/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:17:44 by phautena          #+#    #+#             */
/*   Updated: 2025/05/21 15:25:53 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		~Animal(void);
		Animal(const Animal &copy);
		Animal				&operator=(const Animal &rhs);
		virtual void		makeSound(void) const;
		std::string			getType(void) const;
};

#endif
