/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:29:24 by eviala            #+#    #+#             */
/*   Updated: 2024/10/15 10:34:03 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string;
	std::string	*stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string	&stringREF = string;
	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "stringPTR string: " << *stringPTR << std::endl;
	std::cout << "stringREF string: " << stringREF << std::endl;
}
