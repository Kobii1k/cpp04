/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:34 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 14:08:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	for ( int i = 0; i < 100; i++ )
		brain->ideas[i] = "the void";
	std::cout << "Dog" << CONSTRUCTOR << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog" << DESTRUCTOR << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Dog" << CPYCONSTRUCTOR << std::endl;
}

Dog const    &Dog::operator=(Dog const &copy)
{
	delete brain;
	brain = new Brain();
	*brain = *copy.brain;
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*WOOF! WOOF!!*" << std::endl;
}

std::string		Dog::getIdea(unsigned int index) const
{
	return (brain->ideas[index]);
}

void			Dog::setIdea(std::string idea, unsigned int index) const
{
	brain->ideas[index] = idea;
}
