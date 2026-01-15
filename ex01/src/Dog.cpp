/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 00:00:00 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 01:55:33 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << C_DOG << "Dog" << C_DEF << " default constructor called" << RST << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << C_DOG << "Dog" << C_CPY << " copy constructor called" << RST << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << C_DOG << "Dog" << C_ASN << " copy assignment operator called" << RST << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << C_DOG << "Dog" << C_DST << " destructor called" << RST << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Animal sound: Woof" << std::endl;
}
