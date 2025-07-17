# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 16:40:21 by sapupier          #+#    #+#              #
#    Updated: 2025/07/16 15:24:17 by sapupier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

SRC = src/main.cpp \
			src/zombieHorde.cpp \
			src/Zombie.cpp \

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "[✓] Compilation successful!"

%.o: %.cpp
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "Object files cleaned."


fclean: clean
	@rm -f ${NAME}
	@echo "Full clean done."

re: fclean all

.PHONY: all clean fclean re