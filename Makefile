# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tufan <tufan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 15:44:54 by tkurukay          #+#    #+#              #
#    Updated: 2024/04/25 20:19:35 by tufan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c	\
		action/swap.c	\
		action/push.c	\
		action/rotate.c	\
		action/rev_rotate.c\
		utils.c	\
		exit.c	\
		radix_sort.c	\
		selection_sort.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C libft

clean:
	@$(MAKE) -C libft clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C libft fclean
	@rm -rf $(NAME)
re: fclean all

norm:
	@if norminette | grep -q "Error"; then \
		echo "Norminette: \033[31m[KO]\033[0m"; \
		norminette | grep "Error"; \
	else \
		echo "Norminette: \033[32m[OK]\033[32m"; \
	fi

.PHONY: all re clean fclean norm

