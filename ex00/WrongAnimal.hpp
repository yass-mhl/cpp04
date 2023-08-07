/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:16:21 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 18:06:01 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include "colors.hpp"

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& rhs);

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
	
};

#endif
