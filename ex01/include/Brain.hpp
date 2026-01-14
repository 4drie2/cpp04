/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:42:29 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/14 16:42:56 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain {
    public :
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
    private :
        std::string ideas[100];
};