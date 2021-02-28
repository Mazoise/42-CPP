/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:03:47 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/27 16:44:01 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

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
void print( T const & x ) { std::cout << x << std::endl; }

template< typename T >
void print_space( T const & x ) { std::cout << x << " "; }

void increm(int &element) { element += 1; }
void increm(char &element) { element += 1; }
void increm(float &element) { element += 1; }

template<typename T>
void	iter(T *array, size_t len, void (*f)(T &element))
{
	if (!f || !array)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void	iter(T *array, size_t len, void (*f)(T const &element))
{
	if (!f || !array)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif