# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 18:04:23 by ldinaut           #+#    #+#              #
#    Updated: 2022/10/03 18:07:30 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harlFilter

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