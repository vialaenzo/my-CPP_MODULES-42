/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <eviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:55:20 by eviala            #+#    #+#             */
/*   Updated: 2024/10/14 11:28:44 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
  private:
	std::string _fname;
	std::string _lname;
	std::string _nick;
	std::string _phone_num;
	std::string _secret;

  public:
	Contact(void);
	Contact(std::string fname, std::string lname, std::string nick,
		std::string phone_num, std::string secret);
	~Contact(void);
	std::string get_fname(void) const;
	std::string get_lname(void) const;
	std::string get_nick(void) const;
	std::string get_phone_num(void) const;
	std::string get_secret(void) const;
	void set_fname(std::string str);
	void set_lname(std::string str);
	void set_nick(std::string str);
	void set_phone_num(std::string str);
	void set_secret(std::string str);
};

#endif
