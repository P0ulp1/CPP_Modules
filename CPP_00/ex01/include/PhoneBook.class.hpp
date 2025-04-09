/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:25:39 by phautena          #+#    #+#             */
/*   Updated: 2025/04/09 17:14:05 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.class.hpp"

class	PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	help_menu(void);
		void	add_contact(void);
		void	search_contact(void);

	private:
		Contact	_contacts[8];
		int		_nc;
		int		_oldest;
};
