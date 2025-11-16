/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 07:40:53 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/15 08:07:30 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	str;
	int			i;
	int			j;
	
	if (argc == 1)
	{
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << str << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				str += std::toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << str << std::endl;
	}
	return (0);
}
