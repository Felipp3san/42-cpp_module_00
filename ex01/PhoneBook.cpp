/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:23:44 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 17:49:14 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0)
{};

PhoneBook::PhoneBook(Contact contacts[], int count) : _size(count)
{
	int i;
	
	if (count > 8)
		count = 8;
	i = 0;
	while (i < count)
	{
		_contacts[i] = contacts[i];
		i++;
	}
};

PhoneBook::~PhoneBook() {};

Contact &PhoneBook::operator[](int index)
{
	return (_contacts[index]);
}

void	PhoneBook::saveContact(Contact contact)
{
	if (_size == 8)
		_contacts[7] = contact;
	else
	{
		_contacts[_size] = contact;
		_size++;
	}
}

const Contact	&PhoneBook::getContact(int index) const
{
	return (_contacts[index]);
}

int	PhoneBook::getSize(void) const
{
	return (_size);
}
