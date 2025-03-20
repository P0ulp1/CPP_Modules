/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:12:10 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 13:51:31 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);

private:

	Contact	_contacts[8];
	// int		_index;

	int		_valid_string(std::string str, int mode);

};

#endif
