# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 00:32:31 by mseo              #+#    #+#              #
#    Updated: 2022/01/07 00:33:51 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	attack
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

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