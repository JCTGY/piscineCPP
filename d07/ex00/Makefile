# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 19:50:43 by jchiang-          #+#    #+#              #
#    Updated: 2019/10/31 14:13:35 by jchiang-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CFLAG = -std=c++98 -Wall -Wextra -Werror

INC = -Iincludes

SRC =  whatever.cpp


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
