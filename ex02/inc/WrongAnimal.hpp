/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:18 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:00:37 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP

	#include "main.h"

	class WrongAnimal
	{
	protected:
		std::string		type;
	public:
							WrongAnimal(void);
							virtual	~WrongAnimal(void);
							WrongAnimal(WrongAnimal const &copy);
		WrongAnimal const	&operator=(WrongAnimal const &copy);
		void				makeSound(void);
		std::string			getType(void);
	};

#endif
