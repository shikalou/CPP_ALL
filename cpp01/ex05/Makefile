# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:55:10 by ldinaut           #+#    #+#              #
#    Updated: 2022/10/03 16:44:08 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harl

SRCS	=	main.cpp Harl.cpp

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