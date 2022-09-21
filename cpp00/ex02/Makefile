# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 19:18:09 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/21 19:23:57 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	banksters

SRCS	=	tests.cpp \
			Account.cpp

CXX		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:%.cpp=%.o)

all		:	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		: fclean all

.PHONY: all clean fclean re