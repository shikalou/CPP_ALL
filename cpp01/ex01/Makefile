# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 18:13:28 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/27 20:19:31 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	horde

SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp randomChump.cpp newZombie.cpp

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
