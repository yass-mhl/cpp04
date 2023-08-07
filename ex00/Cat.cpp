/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:54:01 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 17:27:43 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << BLUE << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
    std::cout << BLUE << "Cat copy constructor called" << RESET << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& rhs) {
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

void Cat::makeSound() const {
    std::cout << BLUE << "* miaou *" << RESET << std::endl;
}

Cat::~Cat() {
    std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
}
