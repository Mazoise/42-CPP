/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:32 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 12:47:46 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class	ZombieHorde
{
	public:

		ZombieHorde(int N);
		~ZombieHorde(void);

		Zombie 		*newZombie (std::string name);
		std::string	randomChump(void);
		void		announce(void) const;

	private:
		std::string	_zombietype;
		Zombie		*_zombiehorde;
		int			_N;
};

#endif