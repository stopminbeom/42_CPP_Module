# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 22:38:34 by mseo              #+#    #+#              #
#    Updated: 2022/01/19 17:26:34 by mseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Form
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRC			=	Bureaucrat.cpp \
				Form.cpp \
				main.cpp

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