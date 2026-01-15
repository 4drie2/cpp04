/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 02:07:35 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 02:09:11 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Colors.hpp"

Brain::Brain() {
	std::cout << C_BRAIN << "Brain default constructor called" << RST << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << C_BRAIN << "Brain copy constructor called" << RST << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << C_BRAIN << "Brain copy assignment operator called" << RST << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << C_BRAIN << "Brain destructor called" << RST << std::endl;
}
