NAME = libftprintf.a

# Complie Commands
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm
RMFLAGS = -rf
AR = ar
ARFLAGS = -rcs

# Exterior Library
LIBFT = ./libft/libft.a

# Path
LIBFT_PATH = libft
SORUCE_PATH = sources
OBJECT_PATH = objects
HEADER_PATH = headers

# Sources
SOURCES = ft_printf.c \
		  ft_various.c \
		  ft_print_character.c \
		  ft_print_string.c \
		  ft_print_address.c \
		  ft_print_decimal.c \
		  ft_print_unsigned.c \
		  ft_print_hexa.c \
		  ft_print_percent.c

SOURCE_FILES = $(addprefix $(SOURCE_PATH)/, $(SOURCES))

# Objects
OBJECTS = $(SOURCES:.c=.o)
OBJECTS_FILES = $(addprefix $(OBJECTS_PATH)/, $(OBJECTS))

all : 
	make $(NAME) 

clean : 
	make -C $(LIBFT_PATH) clean
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT) :
	make -C $(LIBFT_PATH) all

$(OBJECT_PATH)/%.o : $(SOURCE_PATH)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INCLUDE_PATH)/ -o $@ -c $<

.PHONY: all clean fclean re bonus libft