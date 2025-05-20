/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:17:30 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 15:55:29 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "../includes/ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &rhs);
		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif
