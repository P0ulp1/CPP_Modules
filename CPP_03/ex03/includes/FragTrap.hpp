/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:02:38 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 16:06:38 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "../includes/ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator=(const FragTrap &rhs);
		void		highFivesGuys(void);
};

#endif
