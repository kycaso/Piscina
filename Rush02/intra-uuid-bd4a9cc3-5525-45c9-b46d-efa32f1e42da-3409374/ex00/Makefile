# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epeters- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 15:32:40 by epeters-          #+#    #+#              #
#    Updated: 2021/07/09 02:02:04 by fbelda-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=main_rush_02.c positions.c writer.c print_number.c
OBJ=main_rush_02.o positions.o writer.o print_number.o
INCL=header_rush_02.h
NAME=rush-02

%.o: %.c $(INCL)
	$(CC) -c -o $@ $< $(CFLAGS)

rush-02: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean fclean

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME) $(OBJ)
