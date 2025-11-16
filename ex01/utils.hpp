/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:24:31 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 18:01:38 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include "PhoneBook.hpp"

enum Option
{
	EXIT,
	ADD,
	SEARCH,
};

void	displayContacts(const PhoneBook &pb);
void	displayContact(const Contact &c);

#endif
