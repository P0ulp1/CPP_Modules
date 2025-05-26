/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:37 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:40:18 by phautena         ###   ########.fr       */
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
		void		setIdeas(const int &index, const std::string &ideas);
		std::string	getIdeas(const int &index);
};

#endif
