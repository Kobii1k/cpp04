/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:51:37 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 14:26:53 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	// Animal test;
	// uncomment to check abstract func.

	Dog d1;
	{
		Dog t(d1);
	}

	std::cout << std::endl << std::endl;

	Dog d2;
	{
		Dog t = d2;
	}

	std::cout << std::endl << std::endl;

	const Animal	*list[6];

	for (size_t i = 0; i < 3; i++)
	{ list[i] = new Dog(); }

	for (size_t i = 3; i < 6; i++)
	{ list[i] = new Cat(); }

	std::cout << std::endl;

	for (size_t i = 0; i < 6; i++)
	{
		std::cout << list[i]->getType() << " " << std::endl;
		std::cout << list[i]->getIdea(0) << std::endl;
	}

	std::cout << std::endl;

	Cat*	a = new Cat();
	Cat*	b = new Cat();
	*a = *b;

	std::cout << std::endl;

	b->setIdea("i'm hungry", 99);

	for (size_t i = 0; i < 100; i++)
	{ std::cout << i << "	-	" << a->getIdea(i) << std::endl; }

	std::cout << std::endl;

	for (size_t i = 0; i < 100; i++)
	{ std::cout << i << "	-	" << b->getIdea(i) << std::endl; }

	std::cout << std::endl;

	for ( int i = 0; i < 6; i++ )
		delete list[i];

	delete a;
	delete b;
	return (0);
}
