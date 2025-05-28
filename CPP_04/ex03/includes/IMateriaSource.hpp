/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:00:02 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/05/28 15:13:40 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "ICharacter.hpp"

class	IMateriaSource
{
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *src) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
