# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 16:44:28 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/29 18:13:23 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	notsed

SRCS	=	main.cpp notsed.cpp

CXX	=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

OBJS	=	$(SRCS:%.cpp=%.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean all

.PHONY: all clean fclean re