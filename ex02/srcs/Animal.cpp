/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:36 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 14:22:53 by mgagne           ###   ########.fr       */
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

std::string		Animal::getType(void) const
{
	return (type);
}
