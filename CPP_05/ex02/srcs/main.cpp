/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:52:55 by phautena          #+#    #+#             */
/*   Updated: 2025/07/31 17:47:13 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	Kumar("Kumar", 150);
	Bureaucrat	Harold("Harold", 1);

	ShrubberyCreationForm	*f1 = new ShrubberyCreationForm("Garden");
	RobotomyRequestForm		f2("Atom");
	PresidentialPardonForm	f3("Dallas");

	std::cout <<"--------------ALL OF THIS SHOULD NOT WORK--------------" << std::endl;
	//Kumar has not the required grade to Sign/Exec the forms
	Kumar.signForm(*f1);
	Harold.signForm(*f1); //Works, just to show that Kumar doesnt have the required grade
	Kumar.executeForm(*f1);

	//Harold can't execute the form because it's not signed
	Harold.executeForm(f2);

	std::cout << "---------------ALL OF THIS SHOULD WORK---------------" << std::endl;

	Harold.signForm(*f1);
	Harold.signForm(f2);
	Harold.signForm(f3);

	Harold.executeForm(*f1);
	Harold.executeForm(f2);
	Harold.executeForm(f3);

	return (0);
}
