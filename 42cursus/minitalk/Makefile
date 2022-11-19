# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 23:54:00 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/18 22:59:23 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

SERVER_NAME			=	server

CLIENT_NAME			=	client

NAME				=	$(SERVER_NAME) $(CLIENT_NAME)

NAME_BONUS			=	$(SERVER_NAME)_bonus $(CLIENT_NAME)_bonus

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft \

INCLUDE_PATH		=	./

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					= 	ar
AFLAGS				= 	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	$(SERVER_NAME).c \
						$(CLIENT_NAME).c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	$(SERVER_NAME)_bonus.c \
						$(CLIENT_NAME)_bonus.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(@:.c=.o)

all:					$(NAME)

bonus:					$(NAME_BONUS)

$(SERVER_NAME):			$(SERVER_NAME).o
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $@.c $(LIBS_A) -o $@

$(CLIENT_NAME):			$(CLIENT_NAME).o
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $@.c $(LIBS_A) -o $@

$(NAME):				$(SRCS_OBJS)

$(NAME_BONUS):			$(BONUS_OBJS)
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(LIBS_A) $@.c -o $@

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

RUN_SERVER			=	$(COMPILER) $(CFLAGS) $(SERVER_NAME).c $(LIBS_A) -o $(SERVER_NAME) ;
ifeq ($(shell pgrep -n $(SERVER_NAME)), )
	ifeq ($(shell uname), Darwin) # MacOS
		RUN_SERVER	+=	echo "\e[1;33mMacOS detected.\e[m" ;
		RUN_SERVER	+=	open -a Terminal -e ./$(SERVER_NAME) &
	else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
		RUN_SERVER	+=	echo "\e[1;33mWindows / WSL detected.\e[m" ;
		RUN_SERVER	+=	cmd.exe /c start cmd.exe /c 'bash -c "/mnt/d/GoogleDrive/code/42cursus/minitalk/$(SERVER_NAME)"' &
	else ifeq ($(shell uname), Linux) # Native Linux
		RUN_SERVER	+=	echo "\e[1;33mNative Linux detected.\e[m" ;
		RUN_SERVER	+=	x-terminal-emulator -e "./$(SERVER_NAME)" &
	endif
endif

#RUN_CLIENT			=	$(COMPILER) $(CFLAGS) $(CLIENT_NAME).c $(LIBS_A) -o $(CLIENT_NAME) ; read -p "Enter $(SERVER_NAME) PID: " argv1 && time ./$(CLIENT_NAME) $$argv1
RUN_CLIENT			=	$(COMPILER) $(CFLAGS) $(CLIENT_NAME).c $(LIBS_A) -o $(CLIENT_NAME) ;
ifeq ($(shell pgrep -n $(SERVER_NAME)), )
	RUN_CLIENT		+=	sleep 1 ;
	RUN_CLIENT		+=	make $@
else ifneq ($(shell pgrep -n $(SERVER_NAME)), )
	RUN_CLIENT		+=	time ./$(CLIENT_NAME) $(shell pgrep -n $(SERVER_NAME))
	RUN_CLIENT		+=	$(SAMPLE)
endif

run: $(NAME)
	 $(RUN_SERVER)
	 $(RUN_CLIENT)

SAMPLE = "Put your sample text here."

200 = "Aliquam gravida erat non dui aliquam interdum. Sed accumsan finibus nulla, eget consequat neque tincidunt at. Sed finibus magna in ante egestas, quis placerat nulla commodo. Suspendisse pulvinar nunc."

500 = "Etiam in purus tempus, tincidunt nibh vel, pretium massa. Vivamus blandit non justo a vehicula. Aliquam metus risus, pellentesque ornare blandit vel, elementum at augue. In sagittis leo turpis, vitae bibendum metus maximus in. Quisque commodo tortor et pretium sagittis. Proin aliquam, arcu in dapibus faucibus, urna elit semper lorem, ac rutrum orci lacus nec est. Aliquam varius sem vel suscipit vulputate. Curabitur nibh ipsum, imperdiet non tortor id, sagittis consequat eros. Vivamus varius non."

1000 = "Cras convallis leo quis eros tincidunt, at pretium nunc congue. Fusce sed elit ut felis posuere dictum. Donec suscipit ultrices ante nec auctor. Pellentesque sollicitudin vitae erat non tristique. Etiam non placerat dolor. Vivamus tristique mi vel mattis mattis. Pellentesque efficitur facilisis accumsan. Sed nec sodales lectus, eget luctus sem. Duis ac sapien ac sem molestie sodales. Fusce arcu odio, pellentesque in imperdiet ut, faucibus sit amet tortor. Suspendisse potenti. Mauris condimentum mollis laoreet. Vestibulum id libero lobortis, euismod urna nec, efficitur eros. Nullam non volutpat orci. Vivamus semper justo odio, vel varius elit condimentum sit amet. Integer et congue arcu. Sed rhoncus lectus sed turpis consectetur interdum. In ac nunc in massa accumsan laoreet sit amet eget arcu. Vestibulum a eros tristique libero lobortis mollis quis sit amet velit. Nullam placerat ipsum nunc, vel euismod lorem dignissim vitae. Donec posuere malesuada tellus, sit amet pharetra libero duis."

10000 = "Integer id nisl quis massa eleifend tempor. Morbi molestie est in velit ornare porttitor. In sit amet volutpat diam, ut posuere est. Pellentesque risus nisl, tempor sed feugiat vitae, ullamcorper vitae urna. Praesent eget ullamcorper quam. Cras ut tortor convallis, iaculis dui at, malesuada massa. Quisque ligula metus, placerat eget massa quis, hendrerit gravida libero. Cras consectetur tempor suscipit. Donec hendrerit volutpat tortor sit amet laoreet. Nam enim purus, commodo non facilisis vitae, suscipit ut mauris. Maecenas et nisi lobortis, tempus quam vitae, vehicula ante. Nunc arcu lectus, tristique a fermentum sed, scelerisque eget quam. Ut eget ante vel odio imperdiet condimentum. Phasellus imperdiet venenatis mollis. Aliquam quis semper ante. Proin placerat et mi eu mattis. Vivamus augue nisl, pretium vel dapibus nec, feugiat ac mi. Sed eu posuere massa. Quisque vitae urna sit amet sem lacinia ornare. Phasellus consequat orci a purus sagittis aliquet. Vestibulum auctor, risus id facilisis ultrices, metus velit pretium magna, id mollis ligula metus quis ante. Quisque nec euismod mauris. Phasellus mollis condimentum est, non iaculis libero pharetra sit amet. Vivamus eget enim ut erat tempus sollicitudin. Vestibulum eget dapibus elit. Duis pellentesque lectus arcu, euismod mollis urna fringilla eu. Nam rhoncus ultricies elit, nec scelerisque magna porta ut. Vivamus eu odio ut nisl semper tempus vitae id ligula. Quisque lorem orci, rutrum ut dapibus quis, lobortis auctor justo. Nullam in purus purus. Vivamus et lacinia lectus. Donec nibh turpis, elementum vehicula sodales a, ultricies ut eros. Ut ut mi id diam congue egestas. Aliquam sed dui eget orci sagittis elementum. Ut ornare ligula ut tortor euismod efficitur. Nam vulputate consectetur tortor in molestie. Ut ut libero sit amet nunc semper dapibus. Morbi at viverra nunc, non ultricies leo. Maecenas lacus odio, viverra at tellus nec, lobortis scelerisque neque. Donec nulla lacus, auctor quis diam nec, consequat laoreet ipsum. Vestibulum nisi augue, elementum a ornare et, pharetra id dui. Aliquam erat volutpat. Ut sit amet accumsan sapien, sit amet dignissim felis. Nulla et elit risus. Curabitur vel sem sagittis, malesuada mi sed, dignissim ex. Pellentesque non eros nibh. In cursus malesuada dignissim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Praesent libero neque, rutrum non ex vel, sagittis rhoncus velit. In faucibus aliquam sagittis. Phasellus non consectetur lorem, a consectetur arcu. Pellentesque et elementum justo. Vestibulum tempus eu purus in commodo. Ut ut nunc nisl. Aliquam lorem urna, ultricies non vehicula fringilla, vulputate cursus lorem. Ut leo elit, tincidunt in auctor in, blandit dignissim ipsum. Nullam ut semper nibh. Nulla eleifend sapien at lorem lobortis congue. Cras quis nisi semper, faucibus tellus a, efficitur dui. Sed auctor tellus bibendum arcu consectetur pretium. Etiam malesuada tortor et imperdiet imperdiet. Ut sagittis ullamcorper tempus. Sed vestibulum iaculis ex eu mollis. Cras cursus nulla at justo accumsan vestibulum vel non arcu. Praesent bibendum vehicula urna vitae rutrum. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nullam pulvinar diam ac tincidunt tincidunt. Proin augue tellus, vestibulum id neque quis, congue feugiat risus. Maecenas dictum odio ut sem consequat, ut feugiat est fringilla. Nam lobortis accumsan diam iaculis vestibulum. Sed luctus sem gravida posuere facilisis. In in ante sed nibh pharetra interdum. Maecenas vel sapien sollicitudin, volutpat ligula ac, auctor ex. Duis sollicitudin pharetra mauris, a lacinia augue viverra eu. In ultricies aliquam justo, ac efficitur leo facilisis ac. Fusce blandit, velit eget pharetra vulputate, mauris ipsum dignissim ipsum, eu bibendum massa dolor a justo. Ut eu congue magna, ac aliquet elit. In imperdiet mattis sapien, quis efficitur libero tincidunt sollicitudin. Sed id tempor enim. Curabitur at magna pharetra, dictum erat sit amet, consequat elit. Nunc cursus dolor lorem, eget aliquet lacus accumsan quis. Mauris eu mauris nibh. Pellentesque maximus ex urna, sit amet porta neque vehicula at. Cras fringilla congue nisi quis blandit. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Aliquam tellus ex, ultrices sed scelerisque at, porttitor eu ipsum. Duis sodales est quis ligula eleifend, quis varius velit volutpat. In varius pharetra enim, sed consectetur turpis. Vivamus imperdiet, magna eu pretium consectetur, urna orci tincidunt neque, ac consectetur enim nulla vel sapien. Nam vel sem ante. In varius risus sit amet euismod blandit. Curabitur porttitor tempus velit venenatis gravida. Nullam in nisi eros. Duis ultrices, enim id venenatis iaculis, urna leo sodales eros, ut elementum quam quam sed eros. Ut a nisi ante. Nunc sodales tellus eget velit pulvinar vehicula. Maecenas consequat tortor metus, at ullamcorper sem rhoncus at. Duis varius quam eros, sit amet consequat elit iaculis ut. Interdum et malesuada fames ac ante ipsum primis in faucibus. Integer auctor odio a dolor venenatis maximus. Fusce ac fermentum leo. Phasellus congue arcu vel lorem efficitur suscipit. In nisl diam, accumsan ut mi in, pellentesque porttitor justo. Quisque gravida hendrerit scelerisque. Aenean ac maximus turpis. Duis pulvinar, risus non malesuada efficitur, tortor nunc auctor massa, a euismod urna enim at purus. Donec volutpat nunc lorem. Donec quis cursus libero, id interdum dui. Sed maximus quam ac arcu interdum facilisis. Pellentesque lacus urna, aliquam eu lacus quis, interdum luctus ipsum. Curabitur vel hendrerit odio. Nullam efficitur lectus ac mi consequat feugiat. Interdum et malesuada fames ac ante ipsum primis in faucibus. Etiam maximus porta finibus. Nullam non imperdiet ipsum, quis accumsan dolor. Cras eget blandit nulla. Nulla facilisi. Mauris scelerisque venenatis diam, vitae facilisis tellus fringilla vel. Duis volutpat enim in eleifend faucibus. Ut vulputate, ex sed molestie cursus, dolor lacus condimentum neque, quis consectetur ex ante non sapien. Phasellus posuere mi lectus, at bibendum risus sodales nec. Maecenas ullamcorper pretium lorem, eu laoreet nulla viverra eget. Nunc quis purus augue. Aliquam hendrerit mi sollicitudin, suscipit lectus sit amet, fringilla metus. Vivamus non sagittis urna, eu vulputate felis. Ut hendrerit risus at ligula congue commodo. Maecenas commodo sapien eget euismod placerat. Vestibulum nec rhoncus turpis, in rutrum sem. Curabitur varius vulputate libero ut semper. Nulla eu ligula velit. Nullam nec lectus ac tellus placerat porta. Cras id massa suscipit, varius magna at, egestas ipsum. Quisque vulputate euismod sapien id tempus. Aenean mattis dictum mattis. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Curabitur libero erat, tincidunt eu nibh vitae, dictum consectetur nisi. Pellentesque ut ligula mauris. Ut et aliquet tortor, quis consequat nunc. Suspendisse elementum justo vel dui rhoncus viverra. Phasellus convallis purus at urna iaculis, blandit interdum felis aliquet. Donec posuere est eu aliquet interdum. Phasellus blandit interdum imperdiet. Aenean pellentesque dictum euismod. Donec pulvinar arcu quis enim rhoncus tempor. Cras auctor velit id nulla hendrerit dictum vitae quis purus. Maecenas vel laoreet lorem. Proin posuere magna urna, vel vestibulum ex imperdiet vel. Ut in arcu eget quam efficitur tristique sed vitae tellus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nam tempor porta erat, ut porta dolor aliquam ullamcorper. Curabitur eu enim convallis, cursus libero eu, iaculis metus. Suspendisse potenti. Ut at lacus enim. Donec quis varius lectus, feugiat congue augue. Cras mollis eu sapien nec sollicitudin. Donec nec turpis tortor. Pellentesque sit amet cursus eros, faucibus pharetra nisi. Mauris quis mi rutrum tellus sagittis maximus faucibus scelerisque justo. Sed molestie ligula nec tellus tincidunt venenatis. Nullam ut posuere magna. Etiam porttitor nisl a sapien aliquet, vitae porta erat fermentum. Nulla eget mattis augue. Aenean vel justo tempor enim eleifend iaculis non et mauris. Vivamus blandit ultricies augue et interdum. Suspendisse faucibus laoreet ante ac tincidunt. Vivamus ullamcorper enim at vestibulum maximus. Donec blandit, orci non venenatis volutpat, ante ante feugiat purus, in euismod nulla sem sed eros. Curabitur nec efficitur risus. Pellentesque tempus tempus metus, ultrices luctus quam imperdiet eu. Donec euismod dolor vitae bibendum sodales. Nullam sed ligula quam. Nunc ut venenatis leo. In facilisis tempus mattis. Mauris sem tellus, scelerisque ac ipsum vitae, pellentesque venenatis arcu. Vestibulum suscipit rhoncus massa. Ut mattis purus ut accumsan lacinia. Vestibulum suscipit ac mauris at sagittis. Nunc maximus lectus mauris, accumsan porttitor sapien gravida ac. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Etiam fermentum dui quis velit pellentesque scelerisque. Suspendisse sed elit nec enim consequat hendrerit sit amet ut nisl. Duis at nisl sed massa porttitor commodo. Integer rutrum sapien sit amet dolor gravida, sit amet consequat arcu pellentesque. Fusce sit amet elit a nunc molestie maximus. Fusce non ligula lacinia enim molestie convallis. Duis et dui eu lorem dapibus facilisis at sit amet nulla. Nam nisl odio, maximus pellentesque ornare vel, faucibus vel orci. Sed ac velit nec nisi consectetur feugiat non a velit. Sed vehicula lacinia sem, et elementum metus eleifend sed. Ut eu nulla ex. Maecenas ut arcu non ex mollis vehicula. Donec eu neque eu enim volutpat sollicitudin et ac mi. Phasellus vitae mauris scelerisque, eleifend est non, rutrum sapien. Proin non lorem lacus. Morbi sollicitudin pellentesque leo nec sodales. Donec tempus non neque sed pulvinar. Ut tempor lacus sit amet enim aliquet, vel sagittis justo porttitor aliquam."