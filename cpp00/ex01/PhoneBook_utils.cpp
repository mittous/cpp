/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:48:58 by imittous          #+#    #+#             */
/*   Updated: 2023/03/22 13:30:35 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


std::string ft_process_data(std::string display)
{
	std::string data;
	while (1337)
	{
		std::cout << display;
		getline(std::cin, data);
		if (std::cin.eof())
			exit(0);
		if (data.length())
			return (data);
		else if (data.empty())
			std::cout << "You didn't enter your " << display <<" try again"<< std::endl;
	}
}


void PhoneBook::ft_add(int index)
{
	this->contacts[index].set_first_name(ft_process_data("first name > "));
	this->contacts[index].set_last_name(ft_process_data("last name > "));
	this->contacts[index].set_nickname(ft_process_data("nickname > "));
	this->contacts[index].set_phone_number(ft_process_data("phone number > "));
	this->contacts[index].set_darkest_secre(ft_process_data("darkest secret > "));
	this->contacts[0].get_first_name();
}


std::string contact::get_first_name(void)
{
	return this->first_name;
}

void contact::set_first_name(std::string value)
{
	this->first_name = value;
}

std::string contact::get_last_name(void)
{
	return this->last_name;
}

void contact::set_last_name(std::string value)
{
	this->last_name = value;
}

std::string contact::get_nickname(void)
{
	return this->nickname;
}

void contact::set_nickname(std::string value)
{
	this->nickname = value;
}

std::string contact::get_phone_number(void)
{
	return this->phone_number;
}

void contact::set_phone_number(std::string value)
{
	this->phone_number = value;
}

std::string contact::get_darkest_secre(void)
{
	return this->darkest_secre;
}

void contact::set_darkest_secre(std::string value)
{
	this->darkest_secre = value;
}
