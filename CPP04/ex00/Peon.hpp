/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:

		Peon(void);
		Peon(std::string name);
		Peon(Peon const &rhs);
		virtual ~Peon(void);
		Peon 			&operator=(Peon const &rhs);

		virtual void	getPolymorphed() const;
};

#endif