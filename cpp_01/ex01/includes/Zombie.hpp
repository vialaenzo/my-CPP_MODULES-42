/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:08:50 by eviala            #+#    #+#             */
/*   Updated: 2024/10/14 15:59:02 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <algorithm>

class	Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};
#endif
