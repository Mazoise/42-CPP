/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:32 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 10:24:49 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class	Span
{
	public :

		Span(void);
		Span(unsigned int N);
		Span(Span const &rhs);
		virtual ~Span(void);
		Span const				&operator=(Span const &rhs);

		void					addNumber(int const number);
		template <class Iterator>
		void					addNumber(Iterator begin, Iterator end)
		{
			int tmp = this->_N - (end - begin + this->_vct.size());

			if (end - begin > 0 && tmp <= 0)
				end += tmp;
			if (this->_vct.size() == this->_N)
				throw (Span::NoSpaceException());
			else
				this->_vct.insert(this->_vct.end(), begin, end);
			if (end - begin > 0 && tmp <= 0)
				throw (Span::NoSpaceException());
		}
		unsigned int			shortestSpan(void) const;
		unsigned int			longestSpan(void) const;
		unsigned int			getN(void) const;
		std::vector<int> const	&getVct(void) const;

		class NoSpanToFindException : public std::exception
		{
			virtual char const	*what(void) const throw()
			{
				return ("No span to find");
			}
		};
		class NoSpaceException : public std::exception
		{
			virtual char const	*what(void) const throw()
			{
				return ("No space left to store value");
			}
		};

	private :
	
		unsigned int	_N;
		std::vector<int>	_vct;
};

#endif