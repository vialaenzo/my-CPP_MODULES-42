/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:25:42 by eviala            #+#    #+#             */
/*   Updated: 2024/11/03 10:02:28 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP
#include "PhoneBook.hpp"
#include <cstdlib>

std::string	add_spaces(int n);
std::string	fix_width(std::string str, long unsigned max);
int			search_ui(Contact contacts[8]);

#endif
