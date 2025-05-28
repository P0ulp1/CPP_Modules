/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:21:15 by phautena          #+#    #+#             */
/*   Updated: 2025/05/28 14:54:33 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria	&operator=(const AMateria &rhs);
		virtual ~AMateria(void);

		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
