/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2026/02/17 16:13:59 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(int, char**)
{
	try {
		std::cout << "------------------------------A TEST------------------------------" << std::endl;
		Span	a(5); // Will work
		a.addNumbers(6);
		a.addNumbers(3);
		a.addNumbers(17);
		a.addNumbers(57);
		a.addNumbers(89);
		std::cout << "Shortest span is: " << a.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << a.longestSpan() << std::endl;

		std::cout << "\n------------------------------B TEST------------------------------" << std::endl;
		Span	b(2);
		b.addNumbers(1);
		b.addNumbers(2);
		b.addNumbers(3); // Will trow SpanFull exception

	}
	catch (const std::exception &e) {
		std::cout << "An error occured: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------------------------C TEST------------------------------" << std::endl;
		Span	c(5);
		c.addNumbers(1);
		c.shortestSpan(); // Will throw OnlyOneElement exception
	}
	catch (const std::exception &e) {
		std::cout << "An error occured: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------------------------D TEST------------------------------" << std::endl;
		Span	d(50);

		std::vector<int>	range;
		range.push_back(10);
		range.push_back(20);
		range.push_back(30);
		range.push_back(40);
		range.push_back(50);

		d.generateNumbers(range.begin(), range.end());

		std::cout << "Shortest span is: " << d.shortestSpan() << std::endl;
		std::cout << "Longest span: " << d.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "An error occured: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------------------------E TEST------------------------------" << std::endl;
		Span	e(100000);

		std::vector<int> t;
		srand(static_cast<unsigned int>(time(NULL)));
		for (int i = 0; i < 100; i++)
			t.push_back(rand() % 56000);

		e.generateNumbers(t.begin(), t.end());

		std::cout << "Shortest span is: " << e.shortestSpan() << std::endl;
		std::cout << "Longest span: " << e.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "An error occured: " << e.what() << std::endl;
	}
	return (0);
}
