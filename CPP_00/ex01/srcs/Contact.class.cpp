/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:28:12 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 13:51:38 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Construct && Destruct
Contact::Contact(void) {

	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
}

// Getters
std::string	Contact::get_fname(void) const {

	return (this->_fname);
}

std::string	Contact::get_lname(void) const {

	return (this->_lname);
}

std::string	Contact::get_nickname(void) const {

	return (this->_nickname);
}

std::string	Contact::get_phone(void) const {

	return (this->_phone);
}

std::string	Contact::get_secret(void) const {

	return (this->_secret);
}

// Setters
void	Contact::set_fname(std::string str) {

	this->_fname = str;
}

void	Contact::set_lname(std::string str) {

	this->_lname = str;
}

void	Contact::set_nickname(std::string str) {

	this->_nickname = str;
}

void	Contact::set_phone(std::string str) {

	this->_phone = str;
}

void	Contact::set_secret(std::string str) {

	this->_secret = str;
}
