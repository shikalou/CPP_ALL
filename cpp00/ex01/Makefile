# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 22:59:53 by ldinaut           #+#    #+#              #
#    Updated: 2022/08/17 18:56:03 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	\
	main.cpp \
	Contact.cpp \
	Phonebook.cpp 

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