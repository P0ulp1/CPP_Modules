/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:21:33 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 13:51:28 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	get_fname(void) const;
	std::string	get_lname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone(void) const;
	std::string	get_secret(void) const;
	void		set_fname(std::string str);
	void		set_lname(std::string str);
	void		set_nickname(std::string str);
	void		set_phone(std::string str);
	void		set_secret(std::string str);

private:

	std::string	_fname;
	std::string	_lname;
	std::string	_nickname;
	std::string	_phone;
	std::string _secret;

};

#endif
