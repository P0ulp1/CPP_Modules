/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:57:15 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 17:00:13 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "../includes/AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &copy);
		Cure	&operator=(const Cure &rhs);
		~Cure(void);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
