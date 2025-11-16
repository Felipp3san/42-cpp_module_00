/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:02:28 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 17:53:33 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	_contacts[MAX_CONTACTS];
	int		_size;

public:
	PhoneBook(void);
	PhoneBook(Contact contacts[], int count);
	~PhoneBook(void);
	Contact			&operator[](int index);
	void			saveContact(Contact contact);
	const Contact	&getContact(int index) const;
	int				getSize(void) const;
};

#endif
