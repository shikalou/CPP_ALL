# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:44:59 by ldinaut           #+#    #+#              #
#    Updated: 2022/11/09 18:32:18 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	base

SRCS_FILES	=	main.cpp Base.cpp

INC_FILES	=	Base.hpp A.hpp B.hpp C.hpp

SRCS	=	$(addprefix srcs/, $(SRCS_FILES))

INCS	=	$(addprefix includes/, $(INC_FILES))

CXX	=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I./includes -g3

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

objs/%.o	: srcs/%.cpp $(INCS)
	mkdir -p objs
	$(CXX) $(CPPFLAGS) -MMD -o $@ -c $<

.PHONY: all clean fclean re