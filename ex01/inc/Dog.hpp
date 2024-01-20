/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:16 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:40:42 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP

	#include "Animal.hpp"
	#include "Brain.hpp"

	class Dog : public Animal
	{
	private:
		Brain	*brain;
	public:
						Dog(void);
						~Dog(void);
						Dog(Dog const &copy);
		Dog const		&operator=(Dog const &copy);
		void			makeSound(void) const;
		std::string		getIdea(unsigned int index) const;
		void			setIdea(std::string idea, unsigned int index) const;
	};
#endif
