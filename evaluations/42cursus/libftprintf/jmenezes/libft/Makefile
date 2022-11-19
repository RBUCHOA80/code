CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := libft.a
SRC_DIR := src
SRC_FILES := ft_abs.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isdigit.c \
	ft_isspace.c ft_memset.c ft_ptoa_base.c ft_putchar_fd.c ft_putchar.c \
	ft_putnchars_fd.c ft_putnchars.c ft_putnstr_fd.c ft_putnstr.c \
	ft_putstr_fd.c ft_putstr.c ft_strlen.c ft_strnlen.c ft_utoa_base.c
SRCS := $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJ_DIR := obj
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -I . -o $@ $<

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
