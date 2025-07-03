# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 16:40:21 by sapupier          #+#    #+#              #
#    Updated: 2025/07/03 15:17:51 by sapupier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "[✓] Compilation successful!"

%.o: %.cpp
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "[i] Object files cleaned."

fclean: clean
	@rm -f ${NAME}
	@echo "[i] Binary removed. Full clean done."

re: fclean all

.PHONY: all clean fclean re