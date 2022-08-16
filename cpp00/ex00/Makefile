# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 17:30:35 by ldinaut           #+#    #+#              #
#    Updated: 2022/08/16 20:43:46 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:%.cpp=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			: fclean all

.PHONY:	all clean fclean re