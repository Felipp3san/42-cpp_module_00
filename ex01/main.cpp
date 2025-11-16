/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:38:27 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 18:30:31 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.hpp"

std::string	getNonEmptyInput(const std::string &prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		if (!getline(std::cin, input))
		{
			std::cout << "\nInput aborted." << std::endl;
			exit(1);
		}
		if (!input.empty())
			return (input);
		std::cout << "This field cannot be empty." << std::endl;
	}
}

void	createContact(PhoneBook &pb)
{
	Contact c;

	c.setFirstName(getNonEmptyInput("Enter first name: "));
	c.setLastName(getNonEmptyInput("Enter last name: "));
	c.setNickname(getNonEmptyInput("Enter nickname: "));
	c.setPhoneNumber(getNonEmptyInput("Enter phone number: "));
	c.setDarkestSecret(getNonEmptyInput("Enter darkest secret: "));
	pb.saveContact(c);
}

void	searchContact(const PhoneBook &pb)
{
	int	index = -1;
	if (pb.getSize() == 0)
	{
		std::cout << "The contact list is empty." << std::endl;
		return ;
	}
	displayContacts(pb);
	while (index == -1)
	{
		std::cout << "Select a contact from the list (Index): ";
		if (!(std::cin >> index))
		{
			std::cout << "\nInput aborted." << std::endl;
			exit(1);
		}
		if (index < 0 || index > pb.getSize() - 1)
		{
			std::cout << "Invalid index, specify another." << std::endl;
			index = -1;
		}
		std::cout << std::endl;
	}
	displayContact(pb.getContact(index));
}

int	main(void)
{
	PhoneBook	phonebook;
	int			opt;

	std::cout << "Welcome to your favorite phonebook app!" << std::endl;
	while (true)
	{
		std::cout << "\nPlease select an option (0: EXIT, 1: ADD, 2: SEARCH): ";
		if (!(std::cin >> opt))
		{
			std::cout << "\nInput aborted." << std::endl;
			exit(1);
		}
		std::cout << std::endl;
		std::cin.ignore();
		if (opt == ADD)
			createContact(phonebook);
		else if (opt == SEARCH)
			searchContact(phonebook);
		else if (opt == EXIT)
			break ;
		else
			std::cout << "\nInvalid option." << std::endl;
	}
	return (0);
}
