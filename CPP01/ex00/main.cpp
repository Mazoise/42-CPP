/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:23:17 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 11:07:13 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heappony;
	
	heappony = new Pony("Franck", "white", "golden", "glitter farts", 12, 90);
	heappony->printstats();
	heappony->jump();
	delete heappony;
}

void	ponyOnTheStack(void)
{
	Pony	stackpony("Lily", "blue", "purple", "flight", 3, 120);

	stackpony.printstats();
	stackpony.brush();
}

int		main()
{
	std::cout << "Running ponyOnTheStack function" << std::endl;
	ponyOnTheStack();
	std::cout << "Exited ponyOnTheStack function" << std::endl;
	std::cout << "Running ponyOnTheHeap function" << std::endl;
	ponyOnTheHeap();
	std::cout << "Exited ponyOnTheHeap function" << std::endl << std::endl;
}
