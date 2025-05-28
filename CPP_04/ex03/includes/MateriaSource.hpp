/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:05:37 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/05/28 15:14:26 by p0ulp1           ###   ########.fr       */
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

		void		learnMateria(AMateria *src);
		AMateria	*createMateria(std::string const &type);
};

#endif
