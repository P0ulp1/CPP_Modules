/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:47:59 by ubuntu            #+#    #+#             */
/*   Updated: 2025/04/21 15:20:40 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);
		~Zombie(void);

		void	set_name(std::string name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);
