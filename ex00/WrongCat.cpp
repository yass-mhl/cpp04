/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:37:37 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 17:42:19 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << CYAN << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	std::cout << CYAN << "WrongCat copy constructor called" << RESET << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << CYAN << "* Miaouwrong *" << RESET << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << CYAN << "WrongCat destructor called" << RESET << std::endl;
}

