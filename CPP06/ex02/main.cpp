/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:25:41 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/26 13:55:47 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void		identify_from_pointer(Base *p)
{
	A	*test_A = dynamic_cast<A*>(p);
	B	*test_B = dynamic_cast<B*>(p);
	C	*test_C = dynamic_cast<C*>(p);

	if (test_A)
		std::cout << "A" << std::endl;
	else if (test_B)
		std::cout << "B" << std::endl;
	else if (test_C)
		std::cout << "C" << std::endl;
	else
		std::cout << "none" << std::endl;

}

void		identify_from_reference(Base &p)
{
	try
	{
		A	&test_A = dynamic_cast<A&>(p);
		(void)test_A;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B	&test_B = dynamic_cast<B&>(p);
			(void)test_B;
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &bc)
		{
			try
			{
				C	&test_C = dynamic_cast<C&>(p);
				(void)test_C;
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &bc)
			{
				std::cout << "none" << std::endl;
			}
		}
	}
}

Base	*generate(void)
{
	int		rand_value = std::rand() % 3;

	if (rand_value == 0)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (rand_value == 1)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C" << std::endl;
		return (new C);
	}
}

void	test()
{
	Base	*test;

	std::cout << "Generating ...                   ";
	test = generate();
	std::cout << "Identifying from pointer ...     ";
	identify_from_pointer(test);
	std::cout << "Identifying from reference ...   ";
	identify_from_reference(*test);
	std::cout << std::endl;
	delete test;
}

int		main()
{
	std::srand(time(0));
	test();
	test();
	test();
	test();
}
