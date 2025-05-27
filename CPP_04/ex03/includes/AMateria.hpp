/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:21:15 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 17:00:07 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "../includes/ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria	&operator=(const AMateria &rhs);
		~AMateria(void);

		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
