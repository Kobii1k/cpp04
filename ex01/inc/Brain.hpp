/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:25 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:13:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP

	#include "Animal.hpp"

	class Brain
	{
	public:
		std::string	ideas[100];

						Brain(void);
						Brain(const Brain& copy);
						~Brain(void);
		Brain const		&operator=(Brain const &copy);
	};

#endif
