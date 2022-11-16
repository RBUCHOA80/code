# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 20:52:37 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/15 20:56:27 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	./
LIBS_LIST			=	libft \
						libftprintf \
						get_next_line \

REMOVE				=	rm
RFLAGS				=	-drf

clean:
						$(foreach dir, $(LIBS), make $@ -C $(dir) ;)

fclean:					clean
						$(foreach dir, $(LIBS), make $@ -C $(dir) ;)

.PHONY:					clean fclean
