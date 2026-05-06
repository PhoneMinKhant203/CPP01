# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 19:43:57 by phonekha          #+#    #+#              #
#    Updated: 2026/05/06 19:50:07 by phonekha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
CC		=	c++
CCFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		 @$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean:	clean
		@rm -rf $(NAME)

re:		fclean all
