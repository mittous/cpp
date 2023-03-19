/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:51:15 by imittous          #+#    #+#             */
/*   Updated: 2023/03/19 12:22:38 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
 
int main(void) {
	PhoneBook phonbook;
	std::string str;
	int index;
	int i,contact_size = 0;
	while (1337)
	{
		std::cout << "Enter one of the following command: ADD SEARCH EXIT\n";
		getline(std::cin, str);
		if (str == "EXIT")
			exit(0);
		else if (str == "ADD")
		{
			std::cout<<"enter first name: ";
			getline(std::cin, str);
			if (str.empty())
			{
				phonbook.contacts[i].set_first_name(str.substr(0,9) + '.');
				std::cout<<"you didn't fill first name can you try againe\n";
				continue ;
			}
			std::cout<<"enter last name: ";
			getline(std::cin, str);
			phonbook.contacts[i].set_last_name(str);

			std::cout<<"enter nickname: ";
			getline(std::cin, str);
			phonbook.contacts[i].set_nickname(str);

			std::cout<<"enter phone number: ";
			getline(std::cin, str);
			phonbook.contacts[i].set_phone_number(str);

			std::cout<<"enter darkest secre: ";
			getline(std::cin, str);
			phonbook.contacts[i].set_darkest_secre(str);
			contact_size++;
			if(contact_size>8)
				contact_size = 8;
			i++;
		}
		else if (str == "S")
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
				// std::cout<< i<<"\n";

			for (int j = 0; j < contact_size; j++)
			{
				// std::cout << "hna";
				std::cout <<"|" << std::setfill(' ') << std::setw (10)<< j<<'|' <<\
					std::setfill(' ') << std::setw (10)<<phonbook.contacts[j].get_first_name()<<'|'<<\
					std::setfill(' ') << std::setw (10)<< phonbook.contacts[j].get_last_name()<<"|"<< \
					std::setfill(' ') << std::setw (10)<<phonbook.contacts[j].get_nickname()<<"|\n";
					std::cout << ' ' << std::setfill ('_') << std::setw (44)<<"\n";
			}
			std::cout<< "Enter the index of the entry to display\n";
			std::cin >> index;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout<<"index is out of range or wrong\n";
			}
			else if (index>=0&& index < contact_size)
			{
				std::cout << ' ' << std::setfill ('_') << std::setw (61)<<"\n";
				std::cout <<"|" << std::setfill(' ') << std::setw (11)<<"first name|" <<\
					std::setfill(' ') << std::setw (11)<<"last name|"<< \
					std::setfill(' ') << std::setw (11)<<"phone number|"<< \
					std::setfill(' ') << std::setw (11)<<"darkest secret|"<< \
					std::setfill(' ') << std::setw (12)<<"nickname|\n";

				std::cout << '|' << std::setfill ('_') << std::setw (11)<<"|" <<\
					std::setfill ('_') << std::setw (11)<<"|" << \
					std::setfill ('_') << std::setw (13)<<"|" << \
					std::setfill ('_') << std::setw (15)<<"|" << \
					std::setfill ('_') << std::setw (12)<<"|\n";
			   
				std::cout <<"|" << std::setfill(' ') << std::setw (11)<< phonbook.contacts[index].get_first_name() <<"|" <<\
					std::setfill(' ') << std::setw (11)<< phonbook.contacts[index].get_last_name() <<"|"<< \
					std::setfill(' ') << std::setw (11)<< phonbook.contacts[index].get_phone_number()<<"|"<< \
					std::setfill(' ') << std::setw (11)<< phonbook.contacts[index].get_darkest_secre()<<"|"<< \
					std::setfill(' ') << std::setw (12)<< phonbook.contacts[index].get_nickname()<<"|\n";
			}
		}
		if (i == 8)
			i = 0;
	}
}
