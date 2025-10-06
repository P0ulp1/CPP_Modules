/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/06 14:54:02 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

int main(int, char**)
{
	try {

		std::cout << "------------------------------A TEST------------------------------" << std::endl;
		Span	a(5); // Will work
		a.addNumbers(0);
		a.addNumbers(10);
		a.addNumbers(20);
		a.addNumbers(30);
		a.addNumbers(40);
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

		std::list<int>	range;
		range.push_back(10);
		range.push_back(20);
		range.push_back(30);
		range.push_back(40);
		range.push_back(50);

		d.generateNumbers(range.begin(), range.end());

		std::cout << "Longest span: " << d.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "An error occured: " << e.what() << std::endl;
	}

	return (0);
}
