# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 23:54:00 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/23 18:46:34 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBS_PATH			=	../
LIBS_NAME			=	libft
LIBS				=	$(LIBS_PATH)$(LIBS_NAME)/$(LIBS_NAME).a

SERVER_NAME			=	server

CLIENT_NAME			=	client

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I ./

REMOVE				=	rm
RFLAGS				=	-drf

MK					=	make
MKFLAGS				=	-C

#MAKEFLAGS			+=	--silent

$(NAME):			$(SERVER_NAME) $(CLIENT_NAME)


$(SERVER_NAME):		$(LIBS)
					$(COMPILER) $(CFLAGS) $(LIBS) $(SERVER_NAME)

$(CLIENT_NAME):		$(LIBS)
					$(COMPILER) $(CFLAGS) $(LIBS) $(CLIENT_NAME)

all:				$(NAME)

bonus:				$(NAME)_bonus

clean:
					$(REMOVE) $(RFLAGS)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME)

re:
					fclean all

.PHONY:				all bonus clean fclean re

RUN_SERVER			=	$(shell uname)

ifeq ($(shell uname), Darwin)
	RUN_SERVER		=	$(COMPILER) $(SERVER_NAME).c $(LIBS) -o $(SERVER_NAME).out ; open -a Terminal -e ./$(SERVER_NAME).out
else ($(shell uname), Linux)
	RUN_SERVER		=	$(COMPILER) $(SERVER_NAME).c $(LIBS) -o $(SERVER_NAME).out ; cmd.exe /c start cmd.exe /c 'bash -c "/mnt/d/GoogleDrive/dev/42rio/42cursus/minitalk/$(SERVER_NAME).out"'
endif

run2:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Put your sample text here."

run:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Put your sample text here."

200:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Nunc eget mauris non tellus ornare ultricies efficitur quis odio. Duis lacus augue, vehicula facilisis porttitor vel, vestibulum sed dui. Nullam hendrerit, ipsum quis aliquet venenatis, quam dolor id."

500:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Quisque non tristique orci, sed sollicitudin lectus. Proin feugiat fringilla nibh, quis vestibulum tellus tristique ut. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Pellentesque et sem condimentum purus bibendum pharetra. In hac habitasse platea dictumst. Vestibulum efficitur pharetra sollicitudin. Maecenas posuere metus sit amet ex pharetra semper. Quisque eget libero eu nulla imperdiet congue. Ut ut pellentesque tortor. Interdum et malesuada ut."

1000:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Duis eu nisi rutrum, pretium elit ac, placerat felis. Proin nibh enim, vestibulum sit amet turpis a, dictum ultricies enim. Sed ut pharetra mi, ac fermentum odio. Quisque sagittis ut lacus ac commodo. Aliquam lobortis eros ut consectetur tincidunt. Nunc non venenatis massa. Cras ut lacus ac sapien pharetra condimentum vitae nec mi. Suspendisse libero turpis, hendrerit vel rhoncus at, henderit et metus. Nullam a risus sollicitudin, placerat nisi vitae, vestibulum nibh. Sed id orci odio. Phasellus fermentum tortor at nulla posuere facilisis. Aenean at magna ac elit porta dictum ac ut metus. Pellentesque pretium malesuada arcu, nec blandit tellus imperdiet a. Quisque sit amet scelerisque eros. Nunc quis ullamcorper neque. Sed consectetur non magna sed suscipit. Phasellus facilisis justo ac magna ullamcorper dictum. Maecenas porta pellentesque tristique. Proin vitae nulla aliquam, aliquam mi in, bibendum ligula. Ut eu porttitor nisl. Phasellus vitae rhoncus ex, ac suscipit nulla. Donec id."

10000:
		$(MK) $(MKFLAGS) $(LIBS_PATH)$(LIBS_NAME)
		$(RUN_SERVER)
		$(COMPILER) $(CLIENT_NAME).c $(LIBS) -o $(CLIENT_NAME).out
		read -p "Enter server PID: " argv1 && time ./$(CLIENT_NAME).out $$argv1 "Donec pulvinar gravida felis. Nulla dui ipsum, dapibus eget sagittis in, tincidunt id nunc. Curabitur varius diam ut felis dictum, id varius tellus bibendum. Donec sollicitudin volutpat feugiat. Praesent laoreet felis eu erat gravida, id pharetra enim auctor. Proin ullamcorper consequat velit. In massa quam, malesuada sit amet ex ac, tempus sodales arcu. Aenean nec tincidunt libero, quis mattis magna. Curabitur feugiat gravida lorem a sollicitudin. Duis consectetur vel libero vel fringilla. Quisque semper sodales neque, at feugiat orci. In quis viverra libero. Ut mi odio, dapibus ac cursus ac, efficitur quis justo. Aliquam lectus lorem, sollicitudin et blandit sit amet, accumsan sagittis est. Nunc quis magna ut risus dignissim rutrum. Phasellus nulla justo, rutrum id tempus eget, elementum non ligula. Aliquam erat volutpat. Donec id vestibulum ligula. Ut sodales, lorem ut porta tempor, leo metus sodales tortor, non iaculis enim dui quis libero. Mauris a consectetur nibh. Praesent varius dolor in magna tempus feugiat. Vestibulum pulvinar finibus justo. Maecenas lobortis orci sit amet lorem placerat bibendum. Vestibulum vitae lacus risus. Sed laoreet, sapien eget commodo sodales, neque ipsum congue felis, vel tempor libero ex et sem. Cras posuere luctus massa, lobortis aliquam tortor molestie eget. In hac habitasse platea dictumst. Etiam pharetra diam velit, eget pharetra sem feugiat sit amet. Pellentesque tempor eu lacus rutrum sodales. Vivamus egestas condimentum libero, nec egestas est efficitur a. Pellentesque eleifend accumsan turpis, at sollicitudin est. Nulla facilisi. Mauris in volutpat est. In feugiat pharetra mi non vulputate. Etiam id purus quis urna tincidunt pretium vel ac purus. Sed cursus neque ut mauris finibus, et ultricies mauris condimentum. Curabitur a ligula massa. Duis iaculis orci et diam facilisis mattis. Vivamus consectetur imperdiet elit at facilisis. Mauris laoreet hendrerit lorem, vitae porta nunc porta a. Mauris vitae pharetra ligula, sit amet porta lorem. Duis congue consectetur mi quis condimentum. Praesent sodales, dolor a rutrum commodo, risus est molestie mi, ac ultrices quam tortor id nulla. Vivamus cursus risus ut felis scelerisque dapibus. Sed justo lectus, pellentesque in sapien eget, sagittis gravida est. Quisque rutrum ex lorem. Integer varius, velit at vehicula gravida, neque justo accumsan metus, venenatis maximus metus lorem eget magna. Curabitur ultrices vel lectus eget fermentum. Curabitur ac erat dolor. Nulla id quam in lacus suscipit congue. Mauris porta nisl in magna eleifend lacinia. Fusce nibh sem, ultrices vel lobortis nec, hendrerit vel ex. Nam elit odio, consequat ut porta quis, pretium at orci. Phasellus quis porttitor lacus. Mauris volutpat metus at erat vehicula, sed semper odio imperdiet. Duis efficitur mi mauris, in aliquam libero lobortis id. Donec vehicula est id dui sollicitudin varius. Ut bibendum nisi ac dui faucibus, nec finibus urna euismod. Quisque scelerisque congue luctus. Ut dui mauris, semper eget mi at, egestas mattis libero. Ut a metus aliquam, hendrerit orci vel, lobortis orci. Aenean tempus leo non pulvinar blandit. Duis lobortis, tellus sed mollis tempor, lectus nunc ullamcorper ligula, ac convallis mauris tortor eu lacus. Ut dignissim magna sit amet urna ornare, nec accumsan orci aliquam. Etiam ac placerat lacus. Sed tincidunt tincidunt accumsan. Etiam est felis, placerat nec semper ut, faucibus a turpis. Nunc dignissim tempor sapien, ac placerat arcu luctus ut. Curabitur sed sapien eu massa scelerisque aliquet vel et neque. Duis eu consectetur augue. Fusce ullamcorper rutrum nisi ac euismod. Nulla sed libero cursus, ullamcorper elit ut, commodo elit. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nulla blandit libero quis facilisis posuere. Duis fringilla, urna fermentum rhoncus bibendum, enim risus pretium nulla, non mollis nunc ligula in quam. Nullam faucibus egestas nulla, sit amet hendrerit purus pulvinar ac. Vestibulum semper purus et pellentesque convallis. Aenean sollicitudin magna ac purus consectetur, in tincidunt est porttitor. In efficitur sagittis ultricies. Nulla facilisi. Phasellus et neque lorem. Ut tristique convallis massa, id lobortis ante vehicula tincidunt. Proin vitae urna sed nunc porttitor tempor eget sit amet enim. Proin eros tellus, volutpat et justo tincidunt, sollicitudin fringilla urna. Nunc tincidunt velit a nulla molestie tincidunt. Donec viverra laoreet nibh, sit amet mollis quam fringilla in. Nullam ut sem facilisis, tempus ante eu, maximus metus. Phasellus convallis egestas iaculis. Etiam maximus orci id vehicula efficitur. Sed id rhoncus diam, et ultricies risus. Cras sit amet auctor libero. Vivamus vel nunc dapibus libero eleifend tristique. Proin libero odio, iaculis rhoncus ornare vitae, ultricies id dui. Sed accumsan in metus et luctus. Integer elementum tellus sit amet nisi tristique, eget placerat dolor molestie. Nam non mauris accumsan, gravida ex eget, mattis nunc. Donec aliquet urna ac arcu aliquam scelerisque. Nulla dictum est leo, sed tempus ligula molestie id. Duis tincidunt mattis malesuada. Nunc ac lorem pulvinar, hendrerit nunc ac, egestas lorem. Morbi odio tellus, imperdiet quis bibendum nec, suscipit ut neque. Duis eget ornare nibh. Donec nisl neque, maximus non tempor vel, condimentum nec ante. Etiam ut massa ac arcu lobortis sagittis eget at nunc. Integer dui lacus, congue eget neque vel, fermentum commodo enim. Etiam sit amet ultrices quam. Suspendisse potenti. Aliquam cursus elit consequat odio dictum, quis tristique arcu volutpat. Nullam placerat scelerisque nibh at tristique. Quisque pharetra metus risus, in pharetra mauris imperdiet nec. Donec congue lacus tellus, in aliquet nulla laoreet vitae. Integer turpis mauris, vestibulum eget mattis et, scelerisque non nulla. Aliquam vel fringilla orci, ac venenatis arcu. Duis eget sollicitudin lorem. Nulla facilisi. Morbi pharetra, justo non commodo pellentesque, purus nunc dictum leo, ac posuere orci sapien laoreet libero. In ut ligula sollicitudin, sagittis sapien a, aliquam tortor. Duis consectetur dui ante. Integer semper a nunc non fermentum. Aliquam vel ex sit amet velit mattis lacinia. Curabitur euismod massa vitae lectus pharetra dictum. Sed dignissim risus non metus scelerisque dapibus quis eu quam. Vestibulum vitae diam egestas, dignissim neque at, tincidunt massa. Maecenas quis enim et est elementum euismod sit amet vitae lorem. Donec a nulla sed magna consectetur porttitor. Etiam vel lacinia justo, non molestie dolor. Vestibulum tempor quam placerat, egestas lacus ut, gravida ipsum. Donec dapibus consectetur nibh at cursus. Etiam imperdiet at tellus sed malesuada. Ut a ornare velit. Phasellus vel ultricies ante, auctor ornare metus. Duis efficitur, dolor nec euismod feugiat, magna ex consectetur augue, at porta nunc lacus non massa. Nullam sit amet elementum nulla. Duis laoreet aliquet eros, sed scelerisque mauris tincidunt eget. Cras eu nulla dolor. Ut ultricies diam in purus tristique porttitor. Nunc molestie faucibus ex, et imperdiet ligula sagittis at. Integer ut tempor lacus. Maecenas mollis efficitur nisi, et euismod elit consequat vitae. Nunc rhoncus, velit at condimentum rutrum, turpis mauris ultricies massa, in accumsan eros ipsum a nisi. Nullam condimentum, ex vitae blandit rutrum, quam leo dignissim dui, id molestie sapien odio in diam. Aliquam et est quis ipsum viverra tincidunt. Fusce ut arcu nunc. Donec orci sapien, pellentesque aliquam nulla et, vulputate semper nisi. Vivamus iaculis erat nisl, ac consectetur velit aliquam in. Interdum et malesuada fames ac ante ipsum primis in faucibus. Pellentesque justo leo, facilisis id porttitor vitae, imperdiet et purus. Pellente. Morbi sit amet diam in justo sodales accumsan. Nunc imperdiet eget metus in consectetur. Sed et justo id nisi rhoncus blandit. Vestibulum vitae libero sit amet ligula semper varius. Aenean facilisis quis arcu et tincidunt. In a purus eleifend, porta nulla at, luctus tortor. In nec quam sagittis, pretium ante nec, interdum orci. Nam at mi ante. Fusce quis nisl massa. Aenean molestie leo id lectus faucibus, eu suscipit diam pretium. Ut varius purus vitae placerat sodales. Curabitur efficitur dictum libero, non suscipit dui. Fusce tortor purus, fermentum vitae blandit et, pharetra ut magna. Nunc ornare nulla urna, vitae efficitur libero aliquet tempor. Suspendisse feugiat, dui quis efficitur scelerisque, velit mi volutpat sapien, eu hendrerit dui libero tempor ante. Ut sed ullamcorper sapien, a tempus lacus. Vivamus eu blandit neque. Proin euismod nisl eget sapien suscipit volutpat. Praesent sit amet magna erat. Sed rutrum scelerisque urna, sit amet accumsan quam luctus at. Fusce fringilla finibus eleifend. Aliquam semper sem non nisi cursus hendrerit. Vivamus et gravida neque. Maecenas sodales magna at dui dapibus, id tempus quam ultricies. Nam vitae augue erat. Maecenas pulvinar in sem a vulputate. Quisque eu finibus nibh, non aliquam nulla. Proin sed neque sagittis justo feugiat tincidunt. Nunc condimentum augue vel purus commodo, et sodales felis sodales. Aliquam eget purus sit amet ipsum posuere sollicitudin. Morbi auctor dapibus nisi at imperdiet. Nulla sed purus quis tellus interdum aliquam. Nullam nec mi sit amet urna efficitur viverra et at odio. Nam eget imperdiet sapien. Morbi ac gravida lectus. Mauris id nunc sed enim porta placerat at eu mi. In vel varius velit, vel dignissim est. Vivamus vitae sodales lectus. Sed pulvinar condimentum efficitur. Aenean pharetra luctus libero sed pulvinar. Nulla diam dui, ultricies eu libero quis, varius viverra purus. Mauris luctus auctor orci, non tempor est luctus sed. Quisque ut ligula eu justo dapibus condimentum. Interdum et malesuada fames ac ante ipsum primis in faucibus. Fusce efficitur nulla sit amet eros facilisis, a congue neque varius. Suspendisse potenti. Duis aliquam nulla nec mauris maximus vestibulum. Curabitur et bibendum leo. Curabitur tempus neque justo. Curabitur ex."
