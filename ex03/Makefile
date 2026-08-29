# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/20 17:34:17 by phonekha          #+#    #+#              #
#    Updated: 2026/06/20 18:02:42 by phonekha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	shoot
CC		=	c++
CCFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean:
			@rm -rf $(OBJ)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all