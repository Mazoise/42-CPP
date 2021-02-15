/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:12:38 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/05 20:50:00 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include <string>
# include <iostream>

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);
	
		void		resetcontact(void);
		int			addcontact(void);
		void		printcontact(void) const;

		std::string	getfirstname(void) const;
		std::string	getlastname(void) const;
		std::string	getnickname(void) const;
		std::string	getlogin(void) const;
		std::string	getpostaladdress(void) const;
		std::string	getemailaddress(void) const;
		std::string	getphonenumber(void) const;
		std::string	getbirthdaydate(void) const;
		std::string	getfavoritemeal(void) const;
		std::string	getunderwearcolor(void) const;
		std::string	getdarkestsecret(void) const;

		void		setfirstname(std::string firstname);
		void		setlastname(std::string lastname);
		void		setnickname(std::string nickname);
		void		setlogin(std::string login);
		void		setpostaladdress(std::string postaladdress);
		void		setemailaddress(std::string emailadress);
		void		setphonenumber(std::string phonenumber);
		void		setbirthdaydate(std::string birthdaydate);
		void		setfavoritemeal(std::string favoritemeal);
		void		setunderwearcolor(std::string underwearcolor);
		void		setdarkestsecret(std::string darkestsecret);

	private:

		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_login;
		std::string	_postaladdress;
		std::string	_emailaddress;
		std::string	_phonenumber;
		std::string	_birthdaydate;
		std::string	_favoritemeal;
		std::string	_underwearcolor;
		std::string	_darkestsecret;
};

#endif