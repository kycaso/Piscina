# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 21:12:13 by fbelda-h          #+#    #+#              #
#    Updated: 2021/01/29 18:51:58 by fbelda-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=main.c ft_map_maker.c ft_sqr_searcher.c ft_finish.c error.c errors2.c
OBJ=main.o ft_map_maker.o ft_sqr_searcher.o ft_finish.o error.o errors2.o
INCL=fun_bsq.h
NAME=bsq

%.o: %.c $(INCL)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean fclean

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)
