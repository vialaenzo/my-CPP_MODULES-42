/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:16:07 by eviala            #+#    #+#             */
/*   Updated: 2024/10/11 10:44:54 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = -1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
			std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return (0);
}
