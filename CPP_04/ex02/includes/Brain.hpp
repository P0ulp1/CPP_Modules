/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:24:18 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:40:22 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain		&operator=(const Brain &rhs);
		void		setIdeas(const int &index, const std::string &ideas);
		std::string	getIdeas(const int &index);
};

#endif
