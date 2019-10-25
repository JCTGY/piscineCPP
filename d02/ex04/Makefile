# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 13:25:42 by jchiang-          #+#    #+#              #
#    Updated: 2019/10/24 18:40:40 by jchiang-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_exp


CFLAG = -std=c++98 -Wall -Wextra -Werror

INC = -Iincludes

SRC =  Fixed.class.cpp main.cpp EvalExp.cpp


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
