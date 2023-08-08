/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:54:01 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:12:09 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << BLUE << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << BLUE << "Cat copy constructor called" << RESET << std::endl;
	this->_brain = new Brain(*src._brain);
	this->type = src.getType();
}

Cat& Cat::operator=(const Cat& rhs) {
if (this != &rhs) {
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	this->type = rhs.getType();
}
return *this;
}

void Cat::makeSound() const {
	std::cout << BLUE << "* miaou *" << RESET << std::endl;
}

Brain* Cat::getBrain() {
	return this->_brain;
}

Cat::~Cat() {
	std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
	delete this->_brain;
}
