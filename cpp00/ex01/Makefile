# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 13:04:45 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/19 19:43:53 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	main.cpp \
				Phonebook.cpp \
				Contact.cpp

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:%.cpp=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			: fclean all

.PHONY:	all clean fclean re