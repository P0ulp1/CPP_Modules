/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:24:29 by ubuntu            #+#    #+#             */
/*   Updated: 2025/04/10 14:23:40 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctype.h>

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		void	info_short(int index);
		void	info_long(void);
		void	set_info(void);

	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_phone;
		std::string	_secret;
};
