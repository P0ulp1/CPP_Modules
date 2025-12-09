/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:05:37 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/12/09 17:09:24 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_memory[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource	&operator=(const MateriaSource &rhs);
		~MateriaSource(void);

		// void		learnMateria(AMateria *src);
		// AMateria	*createMateria(std::string const &type);
};

#endif
