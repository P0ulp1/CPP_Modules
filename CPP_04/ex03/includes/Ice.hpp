/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:42:22 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 17:02:34 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "../includes/AMateria.hpp"

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
