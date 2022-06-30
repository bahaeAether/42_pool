# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 22:30:09 by baboulou          #+#    #+#              #
#    Updated: 2022/06/29 22:12:17 by baboulou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/do.c srcs/op.c

OBJS	= ${SRCS:.c=.o}

LIB	= libdoop.a

EXE		= do-op

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I./includes

.c.o:
			@ ${CC} ${CFLAGS} -c $^ -o ${<:.c=.o}

${LIB}:		${OBJS}
			@ ar -rc ${LIB} $^
			@ ranlib ${LIB}
			@ ${CC} ${CFLAGS} main.c -L. -ldoop -o ${EXE}

all:		${LIB}

clean:
			@ rm -f ${OBJS}

fclean:		clean
			@ rm -f ${LIB} ${EXE}

re:			fclean all

.PHONY:		all clean fclean re
