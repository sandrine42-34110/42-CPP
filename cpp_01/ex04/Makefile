# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 12:03:02 by sapupier          #+#    #+#              #
#    Updated: 2025/07/18 12:06:10 by sapupier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

SRC = src/main.cpp \
			# src/HumanA.cpp \
			# src/HumanB.cpp \
			# src/Weapon.cpp \

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