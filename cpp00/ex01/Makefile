# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 13:04:45 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/19 14:18:34 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	phonebook

SRCS		=	main.cpp \
				Phonebook.cpp \
				Contact.cpp

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