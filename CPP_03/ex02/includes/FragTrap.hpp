/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:52:02 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 13:53:26 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "../includes/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);
		FragTrap	&operator=(const FragTrap &rhs);
		~FragTrap(void);

		void	highFiveGuys(void);
};

#endif
