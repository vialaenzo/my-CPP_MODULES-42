/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:55:17 by eviala            #+#    #+#             */
/*   Updated: 2024/10/14 11:28:23 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	Phonebook	pb1;

	std::string str;
	while (str != "EXIT")
	{
		std::cout << "Your request > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb1.add();
		else if (str == "SEARCH")
			pb1.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
