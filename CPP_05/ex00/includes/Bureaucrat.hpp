/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:53:41 by phautena          #+#    #+#             */
/*   Updated: 2025/06/05 17:15:34 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat		&operator=(const Bureaucrat &rhs);
		~Bureaucrat(void);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			increaseGrade(void);
		void			decreaseGrade(void);

		class GradeTooHigh : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLow : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &copy);
