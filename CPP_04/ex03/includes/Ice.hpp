/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:42:22 by phautena          #+#    #+#             */
/*   Updated: 2025/05/28 14:52:05 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &copy);
		Ice	&operator=(const Ice &rhs);
		~Ice(void);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
