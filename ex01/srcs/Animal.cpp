/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:36 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:40:50 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "Undefined Animal";
	std::cout << "Animal" << CONSTRUCTOR << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal" << DESTRUCTOR << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal" << CPYCONSTRUCTOR << std::endl;
}

Animal const    &Animal::operator=(Animal const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "*random animal noise*" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (type);
}

std::string		Animal::getIdea(unsigned int index) const
{
	(void) index;
	return ("no brain here..");
}

void			Animal::setIdea(std::string idea, unsigned int index) const
{
	(void) idea;
	(void) index;
}
