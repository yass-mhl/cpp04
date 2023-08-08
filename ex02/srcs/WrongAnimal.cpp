/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:28:48 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 18:10:57 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << MAGENTA << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << MAGENTA << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	std::cout << MAGENTA << "WrongAnimal copy constructor called" << RESET << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << MAGENTA << "* Make a wrong sound *" << RESET << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << MAGENTA << "WrongAnimal destructor called" << RESET << std::endl;
}
