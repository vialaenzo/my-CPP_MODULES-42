/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:55:27 by eviala            #+#    #+#             */
/*   Updated: 2024/11/03 11:26:14 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "Welcome to PhoneLand! Created an empty phonebook for up to 8 contacts" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye bye :)!" << std::endl;
}

// Méthode add()
void Phonebook::add(void)
{
	if (this->_index > 7)
		std::cout << "Warning : overwriting info about " << this->_contacts[this->_index
			% 8].get_fname() << std::endl;
	this->_contacts[this->_index
		% 8].set_fname(getInput("Enter First Name : "));
	this->_contacts[this->_index % 8].set_lname(getInput("Enter Last Name : "));
	this->_contacts[this->_index % 8].set_nick(getInput("Enter Nickname : "));
	this->_contacts[this->_index
		% 8].set_phone_num(getInput("Enter Phone Number : "));
	this->_contacts[this->_index
		% 8].set_secret(getInput("Enter Darkest Secret : "));
	std::cout << this->_contacts[this->_index
		% 8].get_fname() << " has been successfully added to the phonebook [" << (this->_index
		% 8) + 1 << "/8]" << std::endl;
	this->_index++;
}

// Méthode getInput()
std::string Phonebook::getInput(const std::string &invite)
{
	std::string entree;
	do
	{
		std::cout << invite;
		if (!std::getline(std::cin, entree))
		{
			if (std::cin.eof())
			{
				std::cout << "\nEnd of the file, exit program." << std::endl;
				exit(0);
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		// Supprimer les espaces au début
		std::string::size_type pos = entree.find_first_not_of(" \t\n\r\f\v");
		if (pos != std::string::npos)
			entree.erase(0, pos);
		// Supprimer les espaces à la fin
		pos = entree.find_last_not_of(" \t\n\r\f\v");
		if (pos != std::string::npos)
			entree.erase(pos + 1);
	} while (entree.empty());
	return (entree);
}
void Phonebook::print(Contact contact)
{
	int			i = 0;
	std::string	str;

	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.get_fname().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|First Name| Last Name|  Nickname|  PhoneNum|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (contact.get_fname().size() && ++i)
	{
		str = fix_width(contact.get_fname(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		str = fix_width(contact.get_lname(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		str = fix_width(contact.get_nick(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		str = fix_width(contact.get_phone_num(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		std::cout << "|" << std::endl;
		std::cout << " -------------------------------------------- " << std::endl;

		str = contact.get_secret();
		std::cout << "Secret : " << str << std::endl;
	}
}

Contact Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void Phonebook::search(void)
{
	std::string str;
	if (!search_ui(this->_contacts))
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8'
				&& this->_contacts[str[0] - 1 - '0'].get_fname().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->_contacts[str[0] - 1 - '0']);
}
