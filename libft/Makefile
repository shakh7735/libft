# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:56:42 by eshakhge          #+#    #+#              #
#    Updated: 2022/03/10 16:56:50 by eshakhge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS	= ${SRCS:.c=.o}

OPTION = -c -I  libft.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = /bin/rm -f

all: ${NAME}

$(NAME):	${OBJS}
	ar rc ${NAME} ${OBJS}

bonus: all

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
