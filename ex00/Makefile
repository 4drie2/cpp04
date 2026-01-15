# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrien <adrien@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 17:37:02 by abidaux           #+#    #+#              #
#    Updated: 2026/01/15 00:58:48 by adrien           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Project name
NAME		= ex00

# Folders
SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= include

# Sources
SRC_FILES	=	Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				main.cpp

# Object files
OBJ_FILES	= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

# Include headers
INCLUDES	= -I$(INC_DIR)

# Default rule
all: $(NAME)

# Link objects to create the binary
$(NAME): $(OBJ_FILES)
	@echo "Linking $(NAME)..."
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

# Compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Ensure obj/ exists
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean object files
clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ_DIR)

# Clean everything
fclean: clean
	@echo "Removing executable..."
	@rm -f $(NAME)

# Rebuild
re: fclean all

# Avoid make interpreting these names as filenames
.PHONY: all clean fclean re
