/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:46:09 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/12 12:40:07 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed &fixed_ref);
		Fixed(const int int_input);
		Fixed(const float float_input);
		~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed				&operator=(const Fixed &rhs);

	private:

		int					_rawbits;
		const static int	_bits = 8;
};

std::ostream				&operator<<(std::ostream &o, Fixed const &rhs);

#endif