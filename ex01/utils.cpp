/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:24:51 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 18:29:56 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

static	std::string truncateString(const std::string &str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, 8) + '.');
	else
		return (str);
}

static void	printTableHeader(void)
{
	std::cout << std::setw(10) << "INDEX" << '|'
		<< std::setw(10) << "FIRST NAME" << '|'
		<< std::setw(10) << "LAST NAME" << '|'
		<< std::setw(10) << "NICKNAME" << std::endl
		<< std::setw(43) << std::string(43, '-') << std::endl;
}

void	displayContact(const Contact &c)
{
	std::cout << "First name: " << c.getFirstName() << std::endl
		<< "Last name: " << c.getLastName() << std::endl
		<< "Nickname: " << c.getNickname() << std::endl
		<< "Phone number: " << c.getPhoneNumber() << std::endl
		<< "Darkest secret: " << c.getDarkestSecret() << std::endl;
}

void	displayContacts(const PhoneBook &pb)
{
	int	i;

	printTableHeader();
	i = 0;
	while (i < pb.getSize())
	{
		const Contact &c = pb.getContact(i);
		std::cout << std::setw(10) << i << '|'
			<< std::setw(10) << truncateString(c.getFirstName(), 10) << '|'
			<< std::setw(10) << truncateString(c.getLastName(), 10) << '|'
			<< std::setw(10) << truncateString(c.getNickname(), 10)
			<< std::endl;
		i++;
	}
	std::cout << std::endl;
}
