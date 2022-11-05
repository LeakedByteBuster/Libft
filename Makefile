# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 20:08:38 by mfouadi           #+#    #+#              #
#    Updated: 2022/11/05 02:04:57 by mfouadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Werror -Wextra -Wall

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcpy.c \
		ft_isalpha.c ft_isdigit.c ft_strlcat.c ft_strlen.c \
		main.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c \
		ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memchr.c ft_memcmp.c ft_memmove.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
		ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
		

HEADER = libft.h

OBJECTS  = $(SRC:.c=.o)

RM = /bin/rm -rf

all: $(NAME)

$(NAME) :$(OBJECTS)
#	$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJECTS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.Phony : all clean fclean re