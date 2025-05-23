/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:24:57 by phautena          #+#    #+#             */
/*   Updated: 2025/05/21 15:27:54 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
