/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:11:45 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 17:03:15 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "../includes/ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	*_ground[100];
	public:
		Character(void);
		Character(std::string const &name);
		Character(const Character &copy);
		Character	&operator=(const Character &rhs);
		~Character(void);

		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
