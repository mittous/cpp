/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:51:15 by imittous          #+#    #+#             */
/*   Updated: 2023/03/22 16:53:43 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	ft_phonebook_design()
{
	std::cout << ' ' << std::setfill ('_') << std::setw (44)<<"\n";
	std::cout <<"|" << std::setfill(' ') << std::setw (11)<<"index|" << \
		std::setfill(' ') << std::setw (11)<<"1st name|" <<\
		std::setfill(' ') << std::setw (11)<<"last name|"<< \
		std::setfill(' ') << std::setw (12)<<"nickname|\n";
		std::cout << '|' << std::setfill ('_') << std::setw (11)<<"|" <<\
		std::setfill ('_') << std::setw (11)<<"|" << \
		std::setfill ('_') << std::setw (11)<<"|" << \
		std::setfill ('_') << std::setw (12)<<"|\n";
}

int main(void) {
	PhoneBook phonbook;
	std::string str;
	int index;
	int i,contact_size = 0;
	while (1337)
	{
		std::cout << "Enter one of the following command: ADD SEARCH EXIT\n";
		getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str == "EXIT")
			exit(0);
		else if (str == "ADD")
		{
			phonbook.ft_add(i);
			contact_size++;
			if(contact_size>8)
				contact_size = 8;
			i++;
		}
		else if (str == "SEARCH")
		{
			ft_phonebook_design();
			for (int j = 0; j < contact_size; j++)
			{
				std::cout <<"|" << std::setfill(' ') << std::setw (10)<< j<<'|' << std::setfill(' ') << std::setw (10) << \
					(phonbook.contacts[j].get_first_name().length() < 10 ? phonbook.contacts[j].get_first_name() : phonbook.contacts[j].get_first_name().substr(0,9) + '.' ) << \
					'|'<< std::setfill(' ') << std::setw (10) << \
					(phonbook.contacts[j].get_last_name().length() < 10 ? phonbook.contacts[j].get_last_name() : phonbook.contacts[j].get_last_name().substr(0,9) + '.' ) << \
					'|' << std::setfill(' ') << std::setw (10) << \
					(phonbook.contacts[j].get_nickname().length() < 10 ? phonbook.contacts[j].get_nickname() : phonbook.contacts[j].get_nickname().substr(0,9) + '.' ) << "|\n";
					std::cout << ' ' << std::setfill ('_') << std::setw (44)<<"\n";
			}
			std::cout<< "Enter the index of the contact you want\n";
			while(1)
			{
				getline(std::cin, str);
				if (std::cin.eof())
					exit(0);
				if (str.length() == 1 && str[0] >= '0' && str[0] <= '7')
				{
					index = str[0] - '0';
					if (index >= 0&& index < contact_size)
						break;
				}
				else
					std::cout << "index is out of range or wrong\nplease try again\n";
			}
			if (index>=0&& index < contact_size)
			{
				std::cout << "first name: " << phonbook.contacts[index].get_first_name() << '\n';
				std::cout << "last name: " << phonbook.contacts[index].get_last_name() << '\n';
				std::cout << "nickname: " << phonbook.contacts[index].get_nickname() << '\n';
				std::cout << "phone number: " << phonbook.contacts[index].get_phone_number() << '\n';
				std::cout << "darkest secret: " << phonbook.contacts[index].get_darkest_secre() << '\n';
			}
			std::cin.ignore();
		}
		if (i == 8)
			i = 0;
	}
}
