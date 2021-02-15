/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:12:57 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/05 20:50:23 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

Phonebook::Phonebook(void)
{
	this->resetcontact();
}

Phonebook::~Phonebook(void)
{}

void			Phonebook::resetcontact(void)
{
	this->_firstname = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_login = "";
	this->_postaladdress = "";
	this->_emailaddress = "";
	this->_phonenumber = "";
	this->_birthdaydate = "";
	this->_favoritemeal = "";
	this->_underwearcolor = "";
	this->_darkestsecret = "";
	return;
}

int				Phonebook::addcontact(void)
{
	std::string		input_info;

	std::cout << "Please input first name :" << std::endl;
	std::getline(std::cin, input_info);
	this->setfirstname(input_info);
	std::cout << "Please input last name :" << std::endl;
	std::getline(std::cin, input_info);
	this->setlastname(input_info);
	std::cout << "Please input nick name :" << std::endl;
	std::getline(std::cin, input_info);
	this->setnickname(input_info);
	if (this->getfirstname() == ""
	&& this->getlastname() == ""
	&& this->getnickname() == "")
	{
		std::cout << "You must at least enter a first name, a last name or a nickname to save your contact." << std::endl;
		return (0);
	}
	std::cout << "Please input login :" << std::endl;
	std::getline(std::cin, input_info);
	this->setlogin(input_info);
	std::cout << "Please input postaladdress :" << std::endl;
	std::getline(std::cin, input_info);
	this->setpostaladdress(input_info);
	std::cout << "Please input email address :" << std::endl;
	std::getline(std::cin, input_info);
	this->setemailaddress(input_info);
	std::cout << "Please input phone number :" << std::endl;
	std::getline(std::cin, input_info);
	this->setphonenumber(input_info);
	std::cout << "Please input birthday date :" << std::endl;
	std::getline(std::cin, input_info);
	this->setbirthdaydate(input_info);
	std::cout << "Please input favorite meal :" << std::endl;
	std::getline(std::cin, input_info);
	this->setfavoritemeal(input_info);
	std::cout << "Please input underwear color :" << std::endl;
	std::getline(std::cin, input_info);
	this->setunderwearcolor(input_info);
	std::cout << "Please input darkest secret :" << std::endl;
	std::getline(std::cin, input_info);
	this->setdarkestsecret(input_info);
	std::cout << "Contact successfully added in phonebook" << std::endl;
	return (1);
}

void				Phonebook::printcontact(void) const
{
	std::cout << "| First name     |" << this->getfirstname() << std::endl;
	std::cout << "| Last name      |" << this->getlastname() << std::endl;
	std::cout << "| Nick name      |" << this->getnickname() << std::endl;
	std::cout << "| Login          |" << this->getlogin() << std::endl;
	std::cout << "| Postal address |" << this->getpostaladdress() << std::endl;
	std::cout << "| Email address  |" << this->getemailaddress() << std::endl;
	std::cout << "| Phone number   |" << this->getphonenumber() << std::endl;
	std::cout << "| Birthday date  |" << this->getbirthdaydate() << std::endl;
	std::cout << "| Favorite meal  |" << this->getfavoritemeal() << std::endl;
	std::cout << "| Underwear color|" << this->getunderwearcolor() << std::endl;
	std::cout << "| Darkest secret |" << this->getdarkestsecret() << std::endl << std::endl;
}

std::string		Phonebook::getfirstname(void) const
{
	return this->_firstname;
}
std::string		Phonebook::getlastname(void) const
{
	return this->_lastname;
}
std::string		Phonebook::getnickname(void) const
{
	return this->_nickname;
}
std::string		Phonebook::getlogin(void) const
{
	return this->_login;
}
std::string		Phonebook::getpostaladdress(void) const
{
	return this->_postaladdress;
}
std::string		Phonebook::getemailaddress(void) const
{
	return this->_emailaddress;
}
std::string		Phonebook::getphonenumber(void) const
{
	return this->_phonenumber;
}
std::string		Phonebook::getbirthdaydate(void) const
{
	return this->_birthdaydate;
}
std::string		Phonebook::getfavoritemeal(void) const
{
	return this->_favoritemeal;
}
std::string		Phonebook::getunderwearcolor(void) const
{
	return this->_underwearcolor;
}
std::string		Phonebook::getdarkestsecret(void) const
{
	return this->_darkestsecret;
}

void			Phonebook::setfirstname(std::string firstname)
{
	this->_firstname = firstname;
	return ;
}

void			Phonebook::setlastname(std::string lastname)
{
	this->_lastname = lastname;
	return ;
}

void			Phonebook::setnickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

void			Phonebook::setlogin(std::string login)
{
	this->_login = login;
	return ;
}

void			Phonebook::setpostaladdress(std::string postaladdress)
{
	this->_postaladdress = postaladdress;
	return ;
}

void			Phonebook::setemailaddress(std::string emailaddress)
{
	this->_emailaddress = emailaddress;
	return ;
}

void			Phonebook::setphonenumber(std::string phonenumber)
{
	this->_phonenumber = phonenumber;
	return ;
}

void			Phonebook::setbirthdaydate(std::string birthdaydate)
{
	this->_birthdaydate = birthdaydate;
	return ;
}

void			Phonebook::setfavoritemeal(std::string favoritemeal)
{
	this->_favoritemeal = favoritemeal;
	return ;
}

void			Phonebook::setunderwearcolor(std::string underwearcolor)
{
	this->_underwearcolor = underwearcolor;
	return ;
}

void			Phonebook::setdarkestsecret(std::string darkestsecret)
{
	this->_darkestsecret = darkestsecret;
	return ;
}
