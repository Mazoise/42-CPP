/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 12:24:39 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	public:

		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;

	private:

		std::string	_name;
		std::string	_type;
};

#endif