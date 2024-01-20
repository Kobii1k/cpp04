/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:20 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:59:16 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP

	#include "WrongAnimal.hpp"

	class WrongCat : public WrongAnimal
	{
	public:
							WrongCat(void);
							~WrongCat(void);
							WrongCat(WrongCat const &copy);
		WrongCat const		&operator=(WrongCat const &copy);
		void				makeSound(void);
	};
#endif
