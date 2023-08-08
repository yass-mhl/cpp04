/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:09:53 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:11:55 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->_brain = new Brain();
    std::cout << RED << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
    std::cout << RED << "Dog copy constructor called" << RESET << std::endl;
    this->_brain = new Brain(*src._brain);
    this->type = src.getType();
}

Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
        this->type = rhs.getType();
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << RED << "* wouf *" << RESET << std::endl;
}

Brain* Dog::getBrain() {
    return this->_brain;
}

Dog::~Dog() {
    std::cout << RED << "Dog destructor called" << RESET << std::endl;
    delete this->_brain;
}
