/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:42:29 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/14 16:53:11 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
