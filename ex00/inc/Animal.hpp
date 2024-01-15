/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:12 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/14 18:59:54 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

	#include "main.h"
	#include "Animal.hpp"

	class Animal
	{
	protected:
		std::string		type;
	public:
						Animal(void);
						~Animal(void);
						Animal(Animal const &copy);
		Animal const    &operator=(Animal const &copy);
		void			makeSound(void);
		std::string		getType(void);
	};
#endif
