SRCS = server.c 
SERVER = server
SRCC = client.c
CLIENT = client
NAME = minitalk

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

PRINTF = ./ft_printf/libftprintf.a

PRINTF_DIR = ./ft_printf/


all: 	 $(SERVER) $(CLIENT)

$(NAME): all

$(SERVER): $(PRINTF)
			${CC} ${CFLAGS} ${SRCS}	${PRINTF} -I. -I$(PRINTF_DIR) -o server

$(CLIENT): $(PRINTF)
			${CC} ${CFLAGS} ${SRCC}	${PRINTF} -I. -I$(PRINTF_DIR) -o client

$(PRINTF): 
	make -C ./ft_printf/

clean: 		
			${RM} $(SERVER) $(CLIENT)

fclean: 	clean
	    	${RM} $(PRINTF)

re: 		fclean all
	
