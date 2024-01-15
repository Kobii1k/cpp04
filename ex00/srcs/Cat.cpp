/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:35 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/14 19:06:44 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat" << CONSTRUCTOR << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat" << DESTRUCTOR << std::endl;
}

Cat::Cat(Cat const &copy)
{
	this->type = copy.type;
	std::cout << "Cat" << CPYCONSTRUCTOR << std::endl;
}

Cat const    &Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "*meow.. meow!*" << std::endl;
}
