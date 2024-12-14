/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:39:13 by eviala            #+#    #+#             */
/*   Updated: 2024/10/15 11:17:14 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType(void);
		void	setType(std::string type);
};

#endif
