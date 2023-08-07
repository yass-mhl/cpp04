/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:04:28 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 11:25:19 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog& src);
        ~Dog();
        Dog& operator=(const Dog& rhs);

        void makeSound() const;
};

#endif