/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:28:47 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/28 11:54:17 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

class Awesome
{
	public:

		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	
	private:

		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
class Array
{
	public:

		Array(void) : _tab(0), _n(0) {}
		Array(unsigned int n) : _tab(new T[n]), _n(n) {}
		Array(Array<T>	const &rhs) : _tab(0), _n(0) { *this = rhs; }
		virtual ~Array(void) { delete[] this->_tab; }
		Array<T>		&operator=(Array<T> const &rhs)
		{
			if (this->_tab)
				delete[] this->_tab;
			this->_n = rhs.size();
			this->_tab = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_tab[i] = rhs[i];
			return *this;
		}
		T				&operator[](unsigned int n) const
		{
			if (n < this->_n)
				return (this->_tab[n]);
			else
				throw (std::out_of_range("index is out of range"));
		}
		unsigned int	size(void) const { return this->_n; }

	private:

		T 				*_tab;
		unsigned int	_n;
};

#endif