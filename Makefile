# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 18:43:36 by ndreadno          #+#    #+#              #
#    Updated: 2020/05/20 19:43:12 by ndreadno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memcmp.c ft_memset.c ft_memcpy.c ft_memmove.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_bzero.c ft_atoi.c \
	ft_calloc.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJ  = ft_memcmp.o ft_memset.o ft_memcpy.o ft_memmove.o ft_isalnum.o ft_isalpha.o \
	ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_strchr.o \
	ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o \
	ft_strrchr.o ft_substr.o ft_tolower.o ft_toupper.o ft_bzero.o ft_atoi.o \
	ft_calloc.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o
INCLUDES = ./
FLAGS = -Wall -Wextra -Werror
all: creat_objects compilation
creat_objects: 
		gcc -I $(INCLUDES) -c $(SRC) $(FLAGS) 
compilation:
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
so:
		gcc -fPIC -c $(FLAGS) $(SRC)
		gcc -shared -o libft.so $(OBJ)
clean:
		/bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME) libft.so
re: fclean all
