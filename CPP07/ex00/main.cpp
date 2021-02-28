/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:59:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/28 12:18:02 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int		a = 13;
	int		b = 12;

	std::cout  << std::endl << "Int test ... " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swap ... " << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	a = 2;
	b = 2;

	std::cout  << std::endl << "Int test ... " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swap ... " << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "&a = " << &a << ", &b = " << &b << std::endl;
	int	const	&res3 = ::min( a, b );
	std::cout << "min( a, b ) = " << res3 << " / " << &res3 << std::endl;
	int	const	&res4 = ::max( a, b );
	std::cout << "max( a, b ) = " << res4 << " / " << &res4 << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout  << std::endl << "String test ... " << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "Swap ... " << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome e(20);
	Awesome f(-3);

	std::cout  << std::endl << "Awesome class test ... " << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "Swap ... " << std::endl;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
}
