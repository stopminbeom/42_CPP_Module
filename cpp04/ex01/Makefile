# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 20:19:48 by mseo              #+#    #+#              #
#    Updated: 2022/01/15 23:08:41 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Deep
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRC			=	main.cpp \
				Brain.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp

RM			=	rm -rf

OBJ			=	$(SRC:.cpp=.o)

%.o			:	%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME)		:	$(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re