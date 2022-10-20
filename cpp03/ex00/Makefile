# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 16:44:35 by ldinaut           #+#    #+#              #
#    Updated: 2022/10/20 12:24:58 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	clapTrap

SRCS_FILES	=	main.cpp ClapTrap.cpp

SRCS	=	$(addprefix srcs/, $(SRCS_FILES))

CXX	=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I./includes

OBJS_FILES	=	$(SRCS_FILES:%.cpp=%.o)

OBJS	=	$(addprefix objs/, $(OBJS_FILES))

DEP		=	$(OBJS:%.o=%.d)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean	:
	rm -rf $(OBJS) $(DEP)
	rm -rf objs/

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean all

objs/%.o	: srcs/%.cpp includes/
	mkdir -p objs
	$(CXX) $(CPPFLAGS) -MMD -o $@ -c $<

.PHONY: all clean fclean re