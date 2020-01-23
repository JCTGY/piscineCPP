# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 19:50:43 by jchiang-          #+#    #+#              #
#    Updated: 2020/01/23 12:24:44 by jchiang-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CFLAG = -std=c++98 -Wall -Wextra -Werror

INC = -Iincludes

SRC =  main.cpp


all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p obj
	clang++ -c $(CFLAG)  $< -o $@

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
