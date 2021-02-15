# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 17:42:47 by mchardin          #+#    #+#              #
#    Updated: 2021/02/10 14:03:29 by mchardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX		=	./

SRCS		=	$(addprefix $(PREFIX), \
								main.cpp \
								)

OBJS		=	${SRCS:.cpp=.o}

CXX			=	clang++

CXXFLAGS	=	-Werror -Wextra -Wall -std=c++98

NAME 		=	replace

RM			=	rm -f

all:
			${MAKE} ${NAME}

${NAME}:	${OBJS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

run:		all
			./$(NAME) main.cpp return explode
			./$(NAME) main.cpp.replace explode return
			./$(NAME) main.cpp.replace.replace return return
			# ./$(NAME) testfile2.txt "$(cat s1file.txt)" lala
			# ./$(NAME) testdir toto lala
			# ./$(NAME) testdir2 lala lala

clean:
			${RM} ${OBJS}

fclean:
			${RM} ${OBJS}
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all re run clean fclean