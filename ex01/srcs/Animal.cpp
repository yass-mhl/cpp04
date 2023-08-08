/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:27:04 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 19:38:33 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	type = src.getType();
}

Animal& Animal::operator=(const Animal& rhs) {
	if (this != &rhs) {
		type = rhs.getType();
	}
	return (*this);
}

void Animal::makeSound() const {
 std::cout << GREEN << "* Make a random sound *" << RESET << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

Animal::~Animal() {
	std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
}
