/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:21:10 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 17:40:00 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() 
	: _firstName("")
	, _lastName("")
	, _nickname("")
	, _phoneNumber("")
	, _darkestSecret("")
{};

Contact::Contact(
	const std::string &firstName,
	const std::string &lastName,
	const std::string &nickname,
	const std::string &phoneNumber,
	const std::string &darkestSecret
)
	: _firstName(firstName)
	, _lastName(lastName)
	, _nickname(nickname)
	, _phoneNumber(phoneNumber)
	, _darkestSecret(darkestSecret)
{};

Contact::Contact(const Contact &other)
	: _firstName(other._firstName)
	, _lastName(other._lastName)
	, _nickname(other._nickname)
	, _phoneNumber(other._phoneNumber)
	, _darkestSecret(other._darkestSecret)
{};


Contact &Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		_firstName = other._firstName;
		_lastName = other._lastName;
		_nickname = other._nickname;
		_phoneNumber = other._phoneNumber;
		_darkestSecret = other._darkestSecret;
	}
	return (*this);
};

Contact::~Contact() {};

void Contact::setFirstName(const std::string &firstName)
{
	_firstName = firstName;
}

const std::string &Contact::getFirstName() const
{
	return (_firstName);
}

void Contact::setLastName(const std::string &lastName)
{
	_lastName = lastName;
}

const std::string &Contact::getLastName() const
{
	return (_lastName);
}

void Contact::setNickname(const std::string &nickname)
{
	_nickname = nickname;
}

const std::string &Contact::getNickname() const
{
	return (_nickname);
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	_phoneNumber = phoneNumber;
}

const std::string &Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	_darkestSecret = darkestSecret;
}

const std::string &Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}
