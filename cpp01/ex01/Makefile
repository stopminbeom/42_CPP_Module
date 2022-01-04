# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 22:45:47 by mseo              #+#    #+#              #
#    Updated: 2022/01/04 23:10:19 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ZombieHorde
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp

RM		=	rm -rf

OBJ		=	$(SRC:.cpp=.o)

%.o		:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re