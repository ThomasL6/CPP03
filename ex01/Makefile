# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 15:42:04 by thlefebv          #+#    #+#              #
#    Updated: 2024/09/12 08:57:31 by thlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= claptrap

CC= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp\
     ClapTrap.cpp\
	 ScavTrap.cpp\

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
