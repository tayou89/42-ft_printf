NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm
RMFLAGS = -f
AR = ar
ARFLAGS = rcs
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft
SRCS = ft_printf.c \
	   check_if_cspdi.c print_address_hexa.c \
	   check_if_others.c ft_itoa_unsigned.c get_hexa_digit.c fill_str_hexa.c
OBJS = $(SRCS:.c=.o)

all : 
	make $(NAME) 

clean : 
	make -C $(LIBFT_DIR) clean
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) -o $@ $^

$(LIBFT) :
	make -C $(LIBFT_DIR) all

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: all clean fclean re bonus
