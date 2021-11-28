# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 15:42:21 by wblotz-c          #+#    #+#              #
#    Updated: 2021/09/27 16:45:37 by wblotz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
NAME 	= libft.a
LIBCOMP = ar rc
LIBRD 	= ranlib
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
OBJS 	= ${SRCS:.c=.o}
INCS 	= includes
RM 		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${LIBCOMP} ${NAME} ${OBJS}
	${LIBRD} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm

