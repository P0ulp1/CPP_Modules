/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:24:29 by ubuntu            #+#    #+#             */
/*   Updated: 2025/04/09 16:15:22 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		void	info_short(void);
		void	info_long(void);
		void	set_info(void);

	private:
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	phone;
		std::string	secret;
};
