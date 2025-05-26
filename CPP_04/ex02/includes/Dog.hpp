/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:44 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:37:57 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../includes/Animal.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		Dog			&operator=(const Dog &rhs);
		void		makeSound(void) const;
		void		setIdeas(const int &index, const std::string &ideas);
		std::string	getIdeas(const int &index);
};

#endif
