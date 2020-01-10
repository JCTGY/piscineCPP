# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/07 16:01:12 by jchiang-          #+#    #+#              #
#    Updated: 2020/01/10 14:50:05 by jchiang-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook


CFLAG = -Wall -Wextra -Werror -std=c++98
 
INC = -Iincludes

SRC :=  ClassContact.cpp \
		phonebook.cpp \
		add.cpp \
		search.cpp \


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
