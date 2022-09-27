# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 15:10:09 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/27 18:17:40 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	walkingdead

SRCS	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

CXX	=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

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
