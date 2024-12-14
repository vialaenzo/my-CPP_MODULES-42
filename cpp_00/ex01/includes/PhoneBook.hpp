/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:55:22 by eviala            #+#    #+#             */
/*   Updated: 2024/10/14 11:46:04 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include "PhoneBook_Utils.hpp"
#include <limits>

class	Phonebook
{
	private:
		std::string getInput(const std::string &invite);
		Contact	_contacts[8];
		int		_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		/* Getters */
		Contact	get_contact(int index);
};

#endif
