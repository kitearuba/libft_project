# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:12:18 by chrrodri          #+#    #+#              #
#    Updated: 2024/07/01 10:02:09 by chrrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

# List of mandatory source files
MANDATORY_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
                 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
                 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
                 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
                 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
                 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
                 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# List of mandatory object files
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)

# List of bonus source files
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
             ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
             ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# List of bonus object files
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Default rule
all: $(NAME)

# Compile the library
$(NAME): $(MANDATORY_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean object files
clean:
	rm -f $(MANDATORY_OBJS) $(BONUS_OBJS)

# Rule to clean all generated files
fclean: clean
	rm -f $(NAME)

# Rule to recompile everything
re: fclean all

# Bonus rule to include bonus files
bonus: $(MANDATORY_OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus