/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:01:57 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 17:53:24 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	Contact(void);
	Contact(
		const std::string &firstName,
		const std::string &lastName,
		const std::string &nickname,
		const std::string &phoneNumber,
		const std::string &darkestSecret
	);
	Contact(const Contact &other);
	Contact	&operator=(const Contact &other);
	~Contact(void);
	void setFirstName(const std::string &firstName);
	const std::string &getFirstName() const;
	void setLastName(const std::string &lastName);
	const std::string &getLastName() const;
	void setNickname(const std::string &nickname);
	const std::string &getNickname() const;
	void setPhoneNumber(const std::string &phoneNumber);
	const std::string &getPhoneNumber() const;
	void setDarkestSecret(const std::string &darkestSecret);
	const std::string &getDarkestSecret() const;
};

#endif
