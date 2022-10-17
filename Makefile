# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 20:08:38 by mfouadi           #+#    #+#              #
#    Updated: 2022/10/17 05:16:42 by mfouadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcpy.c \
		ft_isalpha.c ft_isdigit.c ft_strlcat.c ft_strlen.c main.c ft_strncmp.c

OBJECTS  = $(SRC:.c=.o)

RM = /bin/rm -rf

all = $(NAME)

$(NAME) :$(OBJECTS)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJECTS)

clean :
	$(RM) $(OBJECTS)
fclean :
	$(RM) $(NAME)
re : 
	$(RM) $(NAME) $(OBJECTS)

.Phony : clean fclean re