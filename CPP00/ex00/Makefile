# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 17:42:47 by mchardin          #+#    #+#              #
#    Updated: 2021/02/05 20:51:34 by mchardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX		=	./

SRCS		=	$(addprefix $(PREFIX), \
								megaphone.cpp \
								)

OBJS		=	${SRCS:.cpp=.o}

CXX			=	clang++

CXXFLAGS	=	-Werror -Wextra -Wall

NAME 		=	megaphone

RM			=	rm -f

all:
			${MAKE} ${NAME}

${NAME}:	${OBJS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

run:		all
			./$(NAME) "shhhh... I think the students are asleep"
			./$(NAME) Dammit " ! " "Sorry, I thought this thing was off."
			./$(NAME)

clean:
			${RM} ${OBJS}

fclean:
			${RM} ${OBJS}
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all re run clean fclean