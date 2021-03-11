/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:41 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 09:27:57 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <list>
# include <deque>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception
{
	virtual char const *what(void) const throw()
	{
		return ("Value not found");
	}
};

template<typename T>
int const	&easyfind(T lhs, int rhs)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = lhs.end();

	for (it = lhs.begin(); it != ite; it++)
		if (*it == rhs)
			return (*it);
	throw(NotFoundException());
}

#endif