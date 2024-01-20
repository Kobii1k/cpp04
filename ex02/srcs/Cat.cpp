/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:35 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 15:31:26 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	for ( int i = 0; i < 100; i++ )
		brain->ideas[i] = "the void";
	std::cout << "Cat" << CONSTRUCTOR << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat" << DESTRUCTOR << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	type = copy.type;
	std::cout << "Cat" << CPYCONSTRUCTOR << std::endl;
}

Cat const    &Cat::operator=(Cat const &copy)
{
	delete brain;
	brain = new Brain();
	*brain = *copy.brain;
	this->type = copy.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*meow.. meow!*" << std::endl;
}

std::string		Cat::getIdea(unsigned int index) const
{
	return (brain->ideas[index]);
}

void			Cat::setIdea(std::string idea, unsigned int index) const
{
	brain->ideas[index] = idea;
}
