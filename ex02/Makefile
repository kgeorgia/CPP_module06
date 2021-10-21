# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 14:57:34 by kgeorgia          #+#    #+#              #
#    Updated: 2021/10/21 15:39:31 by kgeorgia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			identify

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -g

RM =			rm -rf

SRC =			A.cpp	B.cpp	C.cpp	main.cpp

HDR =			A.hpp	B.hpp	C.hpp	Base.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS) Makefile
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "Compiled "$(NAME)" successfully!"

%.o:%.cpp $(HDR)
				@$(CC) $(FLAGS) -c $< -o $@
				@echo "Compiled "$<" successfully!"

norme:
				norminette $(DIR_SRCS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus