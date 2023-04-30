# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:47:45 by mgur              #+#    #+#              #
#    Updated: 2022/12/09 19:12:10 by mgur             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk
CLIENT	=	client
SERVER	=	server

LIBFTPRINTF	=	ft_printf/libftprintf.a
LIBFTPRINTF_DIR	=	ft_printf

SRC_C	=	client.c
SRC_S	=	server.c
OBJ_S	=	server.o
OBJ_C	=	client.o

CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror
RM			=	rm -rf

all: $(NAME)

$(NAME) : $(LIBFTPRINTF) $(CLIENT) $(SERVER)

$(SERVER): $(OBJ_S)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $<
	@printf "\e[32m (＾▽＾) SERVER READY (＾▽＾) \e[0m\n"

$(CLIENT): $(OBJ_C)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $<
	@printf "\e[32m (＾▽＾) CLIENT READY (＾▽＾) \e[0m\n"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFTPRINTF):
	@make -C $(LIBFTPRINTF_DIR)

clean:
	@make clean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(OBJ_C) $(OBJ_S)
	@printf "\e[33m(￣▽￣) OBJECT FILES REMOVED (￣▽￣) \e[0m\n"


fclean: clean
	@make fclean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(CLIENT) $(SERVER)
	@printf "\e[31m( ￣＾￣) SERVER REMOVED  ( ￣＾￣) \e[0m\n"
	@printf "\e[31m( ￣＾￣) CLIENT REMOVED  ( ￣＾￣) \e[0m\n"

re: fclean all

.PHONY: all clean fclean re
