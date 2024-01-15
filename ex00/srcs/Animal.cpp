/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:36 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/14 19:29:02 by mgagne           ###   ########.fr       */
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
	this->type = copy.type;
	std::cout << "Animal" << CPYCONSTRUCTOR << std::endl;
}

Animal const    &Animal::operator=(Animal const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "*random animal noise*" << std::endl;
}

std::string		Animal::getType(void)
{
	return (type);
}
