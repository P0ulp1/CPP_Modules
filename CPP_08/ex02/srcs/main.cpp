/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2026/02/18 12:20:23 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main(void)
{
	std::cout << "-------------------------SUBJECT TEST-------------------------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------------------MY TEST-------------------------" << std::endl;

	std::stack<int>							sstack;
	MutantStack<int>						dstack;
	MutantStack< int, std::list<int> >		lstack;
	MutantStack< int, std::vector<int> >	vstack;

	for (int i = 0; i < 5; i++) {
		sstack.push(i + 1);
		dstack.push(i + 1);
		lstack.push(i + 1);
		vstack.push(i + 1);
	}

	while (sstack.empty() == false) {
		std::cout << "sstack: " << sstack.top() << std::endl;
		sstack.pop();
	}
	std::cout << std::endl;

	for (MutantStack<int>::iterator it = dstack.begin(); it != dstack.end(); it++)
		std::cout << "dstack: " << *it << std::endl;
	std::cout << std::endl;

	for (MutantStack< int, std::vector<int> >::iterator it = vstack.begin(); it != vstack.end(); it++)
	std::cout << "vstack: " << *it << std::endl;
	std::cout << std::endl;

	for (MutantStack< int, std::list<int> >::iterator it = lstack.begin(); it != lstack.end(); it++)
		std::cout << "lstack: " << *it << std::endl;
	std::cout << std::endl;

	std::cout << "-------------------------COPY TEST-------------------------" << std::endl;

	MutantStack< int, std::list<int> >	copystack(lstack);
	for (MutantStack<int, std::list<int> >::iterator it = copystack.begin(); it != copystack.end(); it++)
		std::cout << "copystack: " << *it << std::endl;
	std::cout << std::endl;

	std::cout << "-------------------------ASSIGNEMENT OPERATOR TEST-------------------------" << std::endl;

	copystack.pop();
	copystack.pop();
	lstack = copystack;
	for (MutantStack<int, std::list<int> >::iterator it = lstack.begin(); it != lstack.end(); it++)
		std::cout << "lstack: " << *it << std::endl;

	return (0);
}
