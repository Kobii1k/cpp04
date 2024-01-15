/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:51:37 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/14 19:03:30 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	Animal			*one = new Animal();
	Animal			*two = new Dog();
	Animal			*three = new Cat();
	WrongAnimal		*four = new WrongAnimal();
	WrongAnimal		*five = new WrongCat();

	std::cout << one->getType() << " - " << two->getType() << " - " << three->getType() << std::endl;
	std::cout << four->getType() << " - " << five->getType() << std::endl;

	one->makeSound();
	two->makeSound();
	three->makeSound();
	four->makeSound();
	five->makeSound();

	delete one;
	delete two;
	delete three;
	delete four;
	delete five;

	return (0);
}
