# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 02:38:11 by ieropaie          #+#    #+#              #
#    Updated: 2019/06/30 02:19:27 by ieropaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re make all

NAME		= libft.a

FILENAME	= *.c
OBJS 		= $(FILENAME:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -I libft.h

all: $(NAME)

$(NAME):
	$(CC) -c $(FILENAME)
	ar rc $(NAME) $(OBJS)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)
