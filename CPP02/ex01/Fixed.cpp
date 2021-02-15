/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:42:36 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/12 13:39:49 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_input)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawbits = int_input << this->_bits;
}

Fixed::Fixed(const float float_input)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = roundf(float_input * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &fixed_ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_ref;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int				Fixed::getRawBits(void) const
{
	return (this->_rawbits);
}

void			Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}

float			Fixed::toFloat(void) const
{
	float	float_value = this->_rawbits / (float)(1 << this->_bits);
	return (float_value);
}

int				Fixed::toInt(void) const
{
	int		int_value = this->_rawbits >> this->_bits;
	return (int_value);
}

Fixed			&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawbits = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
