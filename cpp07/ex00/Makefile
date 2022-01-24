# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 22:49:16 by mseo              #+#    #+#              #
#    Updated: 2022/01/24 23:40:02 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	whatever
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRC			=	main.cpp
				
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