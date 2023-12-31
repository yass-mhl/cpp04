/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:14:31 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:47:02 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "colors.hpp"
class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);

		virtual void makeSound() const = 0;
		std::string getType() const;
		
		protected:
			std::string type;
};

#endif
