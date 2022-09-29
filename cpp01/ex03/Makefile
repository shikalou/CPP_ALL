# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 13:39:32 by ldinaut           #+#    #+#              #
#    Updated: 2022/09/28 18:37:59 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	barbarianBob

SRCS	=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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