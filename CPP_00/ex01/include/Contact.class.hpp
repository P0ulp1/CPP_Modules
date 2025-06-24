/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:24:29 by ubuntu            #+#    #+#             */
/*   Updated: 2025/06/24 12:43:39 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctype.h>

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		void	info_short(int index);
		void	info_long(void);
		void	set_info(void);
		void	set_field(std::string field_name, std::string &_field);

	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_phone;
		std::string	_secret;
};
