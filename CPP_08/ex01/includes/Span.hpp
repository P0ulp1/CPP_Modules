/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:38:37 by phautena          #+#    #+#             */
/*   Updated: 2025/10/14 14:55:06 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <climits>

class	Span {

	private:
		unsigned int		_n;
		std::list<int>		_numbers;

	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span	&operator=(const Span &rhs);

		void	addNumbers(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	generateNumbers(const std::list<int>::iterator first, const std::list<int>::iterator last);

		class SpanFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class OnlyOneElement : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};



#endif
