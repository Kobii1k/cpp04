/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:34 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:57:36 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog" << CONSTRUCTOR << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog" << DESTRUCTOR << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Dog" << CPYCONSTRUCTOR << std::endl;
}

Dog const    &Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*WOOF! WOOF!!*" << std::endl;
}
