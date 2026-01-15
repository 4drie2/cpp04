/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 00:00:00 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 02:21:34 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Colors.hpp"

Cat::Cat() {
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << C_CAT << "Cat" << C_DEF << " default constructor called" << RST << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << C_CAT << "Cat" << C_CPY << " copy constructor called" << RST << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << C_CAT << "Cat" << C_ASN << " copy assignment operator called" << RST << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << C_CAT << "Cat" << C_DST << " destructor called" << RST << std::endl;
    delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "Animal sound: Meow" << std::endl;
}
