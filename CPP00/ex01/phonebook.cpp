/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:59:34 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/05 19:31:03 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

std::string	trunc_name(std::string name)
{
	std::string cut_name (name);
	
	if (name.length() > 10)
	{
		cut_name.resize(10);
		cut_name.back() = '.';
	}
	else if (name.length() < 10)
		cut_name.insert(0, 10 - name.length(), ' ');
	return (cut_name);
}

void		print_search(Phonebook contact[8], int nb_of_contacts)
{
	std::string			input_index;

	if (nb_of_contacts < 1)
	{
		std::cout << "No contact yet" << std::endl;
		return ;
	}
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	for (int i = 0; i < nb_of_contacts; i++)
	{
		std::cout << "|         " << i << "|";
		std::cout << trunc_name(contact[i].getfirstname()) << "|";
		std::cout << trunc_name(contact[i].getlastname()) << "|";
		std::cout << trunc_name(contact[i].getnickname()) << "|" << std::endl;
	}
	std::cout << "|==========|==========|==========|==========|" << std::endl << std::endl;
	std::cout << "Type the index number of contact to display :" << std::endl;
	std::getline(std::cin, input_index);
	if (input_index.length() == 1 && input_index[0] >= '0' && input_index[0] < '0' + nb_of_contacts)
		contact[std::stoi(input_index)].printcontact();
	else
		std::cout << "Wrong index" << std::endl;
}

int		main()
{
	std::string		input_cmd;
	int				nb_of_contacts = 0;
	Phonebook		contact[8];

	std::cout << std::endl << "=================================" << std::endl;
	std::cout << " Welcome to my awesome phonebook " << std::endl;
	std::cout << "=================================" << std::endl;
	while (1)
	{
		std::cout << std::endl << "Would you like to :" << std::endl;
		std::cout << "- \"ADD\" a contact" << std::endl;
		std::cout << "- \"SEARCH\" for a contact" << std::endl;
		std::cout << "- \"EXIT\"" << std::endl << std::endl;
		std::cout << "Please enter a keyword in capital letters :" << std::endl;
		std::getline(std::cin, input_cmd);
		if (input_cmd == "ADD")
		{
			if (nb_of_contacts >= 8)
				std::cout << "Your phonebook is full, cherish the 8 people you have in your life and move along." << std::endl;
			else
				nb_of_contacts += contact[nb_of_contacts].addcontact();
		}
		else if (input_cmd == "SEARCH")
			print_search(contact, nb_of_contacts);
		else if (input_cmd == "EXIT")
		{
			std::cout << "All your contacts were deleted. Goodbye !" << std::endl;
			exit (0);
		}
		else
			std::cout << "Wrong input, please try again." << std::endl << std::endl;
	}
}
