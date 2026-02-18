/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:38:37 by phautena          #+#    #+#             */
/*   Updated: 2026/02/18 12:20:14 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
# define MUTANT_STACK

# include <iostream>
# include <deque>
# include <vector>
# include <list>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator		iterator;
		typedef typename Container::const_iterator	const_iterator;

		MutantStack(void) : std::stack<T, Container>() {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy) {};
		MutantStack	&operator=(const MutantStack &rhs) {
			if (this != &rhs)
				std::stack<T, Container>::operator=(rhs);
			return (*this);
		}

		iterator		begin() { return this->c.begin(); };
		iterator		end()	{ return this->c.end(); };
		const_iterator	begin() const { return this->c.begin(); };
		const_iterator	end() const { return this->c.end(); };

};

#endif
