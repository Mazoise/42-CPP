/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:34 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 10:25:27 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	if (N > this->_vct.max_size())
		this->_N = this->_vct.max_size();
}

Span::Span(Span const &rhs) { *this = rhs; }
Span::~Span() {}

Span const				&Span::operator=(Span const &rhs)
{
	this->_N = rhs.getN();
	this->_vct = rhs.getVct();
	return (*this);
}

void					Span::addNumber(int const number)
{
	if (this->_vct.size() == this->_N)
		throw (Span::NoSpaceException());
	else
		this->_vct.push_back(number);
}

unsigned int			Span::shortestSpan(void) const
{
	
	if (this->_vct.size() < 2)
		throw (Span::NoSpanToFindException());
	else
	{
		std::vector<int>			vct_sorted = this->_vct;
		int							ret;;
		int							tmp;

		std::sort(vct_sorted.begin(),vct_sorted.end());
		ret = vct_sorted[1] - vct_sorted[0];
		for (unsigned int i = 1; i < vct_sorted.size() - 1; i++)
		{
			if (ret == 0)
				return (0);
			tmp = vct_sorted[i + 1] - vct_sorted[i];
			if (tmp < ret)
				ret = tmp;
		}
		return (ret);
	}
}

unsigned int			Span::longestSpan(void) const
{
	if (this->_vct.size() < 2)
		throw (Span::NoSpanToFindException());
	else
		return (*std::max_element(this->_vct.begin(), this->_vct.end())
				- *std::min_element(this->_vct.begin(), this->_vct.end()));
}

unsigned int			Span::getN(void) const { return this->_N; }
std::vector<int> const	&Span::getVct(void) const { return this->_vct; }