# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/15 07:33:54 by fde-alme          #+#    #+#              #
#    Updated: 2025/11/16 14:24:21 by fde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g

BUILD_DIR := build
NAME := accounts

SRC := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
