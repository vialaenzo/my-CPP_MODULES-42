/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:11:25 by eviala            #+#    #+#             */
/*   Updated: 2024/10/14 15:46:52 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int size = 20;
	Zombie *horde = zombieHorde(size, "Zom");
	for(int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
