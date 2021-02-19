/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:59:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 20:59:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	public :

		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &rhs);
		virtual ~AMateria(void);
		AMateria			&operator=(AMateria const &rhs);
		std::string const 	&getType() const;
		unsigned int		getXP() const;
		void				addXP();
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	private :

		unsigned int		_xp;
		std::string const	_type;
};

#endif