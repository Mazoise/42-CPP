/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Sorcerer.hpp"
# include <iostream>
# include <string>

class Victim
{
	public:

		Victim(void);
		Victim(std::string name);
		Victim(Victim const &rhs);
		virtual ~Victim(void);
		Victim 			&operator=(Victim const &rhs);

		std::string		getName(void) const;
		void			setName(std::string Name);

		virtual void	getPolymorphed() const;

	protected:

		std::string		_name;
};

std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif