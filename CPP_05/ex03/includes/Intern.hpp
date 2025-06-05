/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:06:18 by phautena          #+#    #+#             */
/*   Updated: 2025/06/05 13:17:38 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern &copy);
		Intern	&operator=(const Intern &rhs);
		~Intern(void);

		AForm	*makeForm(std::string form, std::string target);

		class	WrongFormName : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
