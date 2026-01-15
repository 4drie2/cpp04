/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 00:00:00 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 02:07:52 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// Reset
#define RST		"\033[0m"

// Canonical form colors
#define C_DEF	"\033[1;32m"  // Green - Default constructor
#define C_CPY	"\033[1;36m"  // Cyan - Copy constructor
#define C_ASN	"\033[1;33m"  // Yellow - Assignment operator
#define C_DST	"\033[1;31m"  // Red - Destructor

// Class name colors
#define C_ANIMAL	"\033[1;35m"  // Magenta - Animal
#define C_CAT		"\033[1;34m"  // Blue - Cat
#define C_DOG		"\033[1;93m"  // Bright Yellow - Dog
#define C_WRONG		"\033[1;91m"  // Bright Red - WrongAnimal/WrongCat
#define C_BRAIN     "\033[1;94m"  // Bright Blue - Brain
