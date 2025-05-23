/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:37 by phautena          #+#    #+#             */
/*   Updated: 2025/05/23 13:07:40 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../includes/Animal.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		Cat			&operator=(const Cat &rhs);
		void		makeSound(void) const;
		void		setIdeas(const std::string &ideas);
		std::string	getIdeas(int index);
};

#endif
