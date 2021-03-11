/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 09:42:53 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <deque>
# include <stack>
# include <iostream>
# include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack<T> const &rhs) : std::stack<T>(rhs) {}
		virtual ~MutantStack(void) {}

		MutantStack<T>		&operator=(MutantStack<T> const &rhs)
		{
			this->c = rhs.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator			begin(void) { return (this->c.begin()); }
		iterator			end(void) { return (this->c.end()); }
		const_iterator		begin(void) const { return (this->c.begin()); }
		const_iterator		end(void) const { return (this->c.end()); }
};

#endif