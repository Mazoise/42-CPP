/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:23:27 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/08 15:27:10 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
	public:

		Pony(std::string name, std::string maincolor, std::string secondarycolor, std::string magicalpower, int age, int height);
		~Pony(void);

		void		printstats(void) const;
		void		jump(void) const;
		void		brush(void) const;

	private:

		std::string	_name;
		std::string	_maincolor;
		std::string	_secondarycolor;
		std::string	_magicalpower;
		int			_age;
		int			_height;
};

#endif