NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm
RMFLAGS = -rf
AR = ar
ARFLAGS = rcs

# Source Paths
SOURCE_PATH = source
SOURCE_MENDATORY_PATH = $(SOURCE_PATH)/mendatory
SOURCE_PART1_PATH = $(SOURCE_MENDATORY_PATH)/part_1
SOURCE_PART2_PATH = $(SOURCE_MENDATORY_PATH)/part_2
SOURCE_BONUS_PATH = $(SOURCE_PATH)/bonus

# Object Paths
OBJECT_PATH = object
OBJECT_MENDATORY_PATH = $(OBJECT_PATH)/mendatory
OBJECT_PART1_PATH = $(OBJECT_MENDATORY_PATH)/part_1
OBJECT_PART2_PATH = $(OBJECT_MENDATORY_PATH)/part_2
OBJECT_BONUS_PATH = $(OBJECT_PATH)/bonus

# Include Path
INCLUDE_PATH = include

# File Names
PART1_FILE_NAMES = ft_isalpha ft_isdigit ft_isalnum \
				   ft_isascii ft_isprint ft_toupper \
				   ft_tolower ft_strchr ft_strrchr \
				   ft_strlen ft_strncmp ft_memset \
				   ft_bzero ft_memchr ft_memcpy \
				   ft_memcmp ft_memmove ft_strlcpy \
				   ft_strnstr ft_strlcat ft_atoi \
				   ft_calloc ft_strdup

PART2_FILE_NAMES = ft_substr ft_strjoin ft_strtrim \
				   ft_split ft_itoa ft_strmapi \
				   ft_striteri ft_putchar_fd ft_putstr_fd \
				   ft_putendl_fd ft_putnbr_fd

BONUS_FILE_NAMES = ft_lstnew ft_lstadd_front ft_lstsize \
				   ft_lstlast ft_lstadd_back ft_lstdelone \
				   ft_lstclear ft_lstiter ft_lstmap

# Source Files
SOURCE_PART1 = $(addprefix $(SOURCE_PART1_PATH)/, $(addsuffix .c, $(PART1_FILE_NAMES)))
SOURCE_PART2 = $(addprefix $(SOURCE_PART2_PATH)/, $(addsuffix .c, $(PART2_FILE_NAMES)))
SOURCE_MEDATORY = $(SOURCE_PART1) $(SOURCE_PART2)
SOURCE_BONUS = $(addprefix $(SOURCE_BONUS_PATH)/, $(addsuffix .c, $(BONUS_FILE_NAMES)))

# Object Files
OBJECT_PART1 = $(addprefix $(OBJECT_PART1_PATH)/, $(addsuffix .o, $(PART1_FILE_NAMES)))
OBJECT_PART2 = $(addprefix $(OBJECT_PART2_PATH)/, $(addsuffix .o, $(PART2_FILE_NAMES)))
OBJECT_MENDATORY = $(OBJECT_PART1) $(OBJECT_PART2)
OBJECT_BONUS = $(addprefix $(OBJECT_BONUS_PATH)/, $(addsuffix .o, $(BONUS_FILE_NAMES)))

ifdef WITH_BONUS
	TOTAL_OBJECTS = $(OBJECT_MENDATORY) $(OBJECT_BONUS)
else
	TOTAL_OBJECTS = $(OBJECT_MENDATORY)
endif

all: $(NAME)

$(NAME): $(TOTAL_OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

clean: 
	$(RM) $(RMFLAGS) $(TOTAL_OBJECTS)
	$(RM) $(RMFLAGS) $(OBJECT_PATH)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

bonus:
	make WITH_BONUS=1 all

$(OBJECT_PATH)/%.o: $(SOURCE_PATH)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INCLUDE_PATH)/ -c $< -o $@

.PHONY: all clean fclean re bonus