/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chicken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHICKEN_HPP
# define CHICKEN_HPP

# include "Victim.hpp"

class Chicken : public Victim
{
	public:

		Chicken(void);
		Chicken(std::string name);
		Chicken(Chicken const &rhs);
		virtual ~Chicken(void);
		Chicken 			&operator=(Chicken const &rhs);

		virtual void	getPolymorphed() const;
};

#endif