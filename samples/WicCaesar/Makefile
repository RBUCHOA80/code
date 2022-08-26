# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 19:38:06 by cnascime          #+#    #+#              #
#    Updated: 2022/08/26 20:09:00 by cnascime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS = --silent
NAME	= libftprintf.a
INCLUDES = ./
SOURCES	= ft_printf.c utils.c
#SOURCESPATH	= ./
# .c=.o implicitly compiles the source-code into binary objects.
OBJECTS	= $(SOURCES:.c=.o)
#OBJECTSPATH	= objects/
LIBFTPATH = libft/
LIBFTOBJECTSPATH = $(LIBFTPATH)objects/
LIBFT	= libft.a
COMPILE	= cc
FLAGS	= -Wall -Wextra -Werror
REMOVE	= rm -f

all:		$(NAME)

# Compiles from open-source to binary, but doesn't link. Necessary to run flags.
.c.o:		$(OBJECTS)
	$(COMPILE) $(FLAGS) -c $< -o $(<:.c=.o)

# Calling its name acts as its own makefile. Will compile only if the object 
# dependencies are fulfilled. ar creates an archive (here, library) from the 
# files member (objects), replacing them as needed. ranlib simply ies 
# every function in the library (equivalent to s in crs).
#  hides the clutter from the terminal.
$(NAME):	$(LIBFT)
	$(COMPILE) $(FLAGS) -I $(INCLUDES) -c $(SOURCESPATH)$(SOURCES)
	ar r $(NAME) $(LIBFTOBJECTSPATH)*.o $(OBJECTSPATH)$(OBJECTS)
#	cp $(LIBFTPATH)$(LIBFT) $(NAME)
#	echo "\033[0;32mPresto!\033[0m"

#$(OBJECTSPATH):
#	mkdir -p $(OBJECTSPATH)
#	$(COMPILE) $(FLAGS) -I $(INCLUDES) $(SOURCESPATH)$(SOURCES)
#	mv *.o $(OBJECTSPATH)

$(LIBFT):
	make $(LIBFT) -C $(LIBFTPATH)
	mkdir -p $(LIBFTOBJECTSPATH)
	mv $(LIBFTPATH)*.o $(LIBFTOBJECTSPATH)

# Removes only compiled objects.
clean:
	$(REMOVE) *.o
	$(REMOVE) *.gch
	$(REMOVE) $(LIBFTPATH)*.o
#	$(REMOVE)r $(OBJECTSPATH)
	$(REMOVE)r $(LIBFTOBJECTSPATH)

# Removes compiled objects first, then proceeds to remove the library itself.
fclean:		clean
	$(REMOVE) $(NAME)
	$(REMOVE) $(LIBFT)
	$(REMOVE) $(LIBFTPATH)$(LIBFT)

# Forces the recompilation even if everything is up to date.
re:			fclean all

run:
	cc *.c ./libft/*.c && ./a.out && rm a.out

valgrind:
	cc *.c ./libft/*.c && time valgrind -s ./a.out && rm a.out

# If bonus functions are present
BONUSINCLUDES	= ./
BONUSSOURCES	= ft_printf_bonus.c utils_bonus.c flagutils_bonus.c counters_bonus.c
BONUSOBJECTS	= $(BONUSSOURCES:.c=.o)
bonus: fclean $(LIBFT)
	$(CC) $(CC_FLAGS) -I $(BONUSINCLUDES) -c $(BONUSSOURCES)
	ar r $(NAME) $(LIBFTOBJECTSPATH)*.o $(OBJECTSPATH)$(BONUSOBJECTS)
#	echo "\033[0;32mPresto!\033[0m"

#BONUSOBJECTSPATH:
#	mkdir -p $(OBJECTSPATH)
#	$(CC) $(CC_FLAGS) -I $(BONUSINCLUDES) -c $(BONUSSOURCES)
#	mv *.o $(OBJECTSPATH)

# Ignores files that could eventually be named after any of these parameters.
.PHONY:		libft bonus all clean fclean re run valgrind

testeo:
	gcc teste_o.c libftprintf.a
	./a.out
	rm a.out

testeb:
	gcc teste_b.c libftprintf.a
	./a.out
	rm a.out