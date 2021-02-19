/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 16:05:05 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Victim;

class Sorcerer
{
	public:

		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &rhs);
		virtual ~Sorcerer(void);
		Sorcerer 		&operator=(Sorcerer const &rhs);

		void		polymorph(Victim const &victim) const;

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void		setName(std::string Name);
		void		setTitle(std::string Title);

	private:

		std::string		_name;
		std::string		_title;
};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif