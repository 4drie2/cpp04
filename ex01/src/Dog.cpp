/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 00:00:00 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 02:21:44 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"

Dog::Dog() {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << C_DOG << "Dog" << C_DEF << " default constructor called" << RST << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << C_DOG << "Dog" << C_CPY << " copy constructor called" << RST << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << C_DOG << "Dog" << C_ASN << " copy assignment operator called" << RST << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << C_DOG << "Dog" << C_DST << " destructor called" << RST << std::endl;
    delete this->brain;
}

void Dog::makeSound() const {
    std::cout << "Animal sound: Woof" << std::endl;
}
