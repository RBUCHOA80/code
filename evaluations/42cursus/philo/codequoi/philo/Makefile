NAME	= philo
CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -pthread

# Run 'make re MODE=pretty' for color formatting.
# Run 'make re MODE=debug' for debug formatting.
MODE	= none
ifeq ($(MODE), pretty)
	CFLAGS	+= -D DEBUG_FORMATTING=1
endif
ifeq ($(MODE), debug)
	CFLAGS	+= -D DEBUG_FORMATTING=1 -fsanitize=thread -g
endif

SRC_PATH = sources/
OBJ_PATH = objects/

SRC		=	main.c \
			parsing.c \
			grim_reaper.c \
			time.c \
			philosopher.c \
			init.c \
			output.c \
			exit.c
SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))

INC		= -I ./includes/

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

#                           +------------------ <- nop <- number_of_philosophers;
#                           | +---------------- <- ttd <- time_to_die;
#                           | |   +------------ <- tte <- time_to_eat;
#                           | |   |   +-------- <- tts <- time_to_sleep;
#                           | |   |   |   +---- <- pme <- [optional] number_of_times_each_philosopher_must_eat;
#                           | |   |   |   |
#ARG					=	5 800 200 200   # No philosopher should die.
#ARG					=	5 800 200 200 7 # No philosopher should die.
#ARG					=	4 410 200 200   # No philosopher should die.
ARG						=	4 310 200 100 7 # One philosopher should die.
#ARG					=	1 800 200 200   # The philosopher should not eat and should die
#ARG					=	5 410 200 100 7
#ARG					=	5 120 80 80 #Moana tolds all will die

run:					$(NAME)
						./$(NAME) $(ARG)

grep:					re
						./$(NAME) $(ARG) | grep 'died'

valgrind:				re
						valgrind --leak-check=full -s -v --track-origins=yes ./$(NAME) $(ARG)

helgrind:				re
						valgrind --tool=helgrind ./$(NAME) $(ARG)

fsanitize: 				$(OBJS)
						$(CC) $(CFLAGS) -fsanitize=address $(OBJS) -o $@
						./$(NAME) $(ARG)

rerun:					re run
