NAME	=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	clang
CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -f

SOURCES	=		ft_printf.c \
				ft_putchar.c \
				ft_decimal.c \
				ft_hexadecimal_lower.c \
				ft_hexadecimal_upper.c \
				ft_is_argument.c \
				ft_itoa_base.c \
				ft_unsigneddecimal.c \
				ft_point_hexadecimal.c \



OBJECTS	=	$(SOURCES:.c=.o)

all:	$(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

$(NAME):	 $(OBJECTS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJECTS)
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C $(LIBFT_PATH)
	@$(RM) $(OBJECTS)

fclean:	clean
	@make fclean -C $(LIBFT_PATH)
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
