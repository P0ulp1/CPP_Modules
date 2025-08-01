/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:52:55 by phautena          #+#    #+#             */
/*   Updated: 2025/08/01 13:37:42 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Kumar("Kumar", 150);
		Bureaucrat	Harold("Harold", 1);
		Intern		randomIntern;


		AForm *f1 = randomIntern.makeForm("robotomy request", "Atom");
		Harold.signForm(*f1);
		Harold.executeForm(*f1);

		AForm *f2 = randomIntern.makeForm("presidential pardon", "Dallas");
		Harold.signForm(*f2);
		Harold.executeForm(*f2);

		AForm *f3 = randomIntern.makeForm("shrubbery creation", "Garden");
		Harold.signForm(*f3);
		Harold.executeForm(*f3);

		AForm *f4 = randomIntern.makeForm("increase wages", "phautena"); //This one should throw an exception
		Harold.signForm(*f4);
		Harold.executeForm(*f4);
	}
	catch(const std::exception& e)
	{
		std::cout << "An error happened because " << e.what() << std::endl;
	}



	return (42);
}
