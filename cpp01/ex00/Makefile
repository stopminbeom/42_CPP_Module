# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 18:16:26 by mseo              #+#    #+#              #
#    Updated: 2022/01/03 20:11:03 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

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