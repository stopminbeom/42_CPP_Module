# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 17:16:48 by mseo              #+#    #+#              #
#    Updated: 2022/01/09 19:58:33 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Fixed.cpp

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