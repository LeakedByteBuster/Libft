# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 20:08:38 by mfouadi           #+#    #+#              #
#    Updated: 2022/11/07 05:21:33 by mfouadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Werror -Wextra -Wall

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcpy.c \
		ft_isalpha.c ft_isdigit.c ft_strlcat.c ft_strlen.c \
		ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c \
		ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memchr.c ft_memcmp.c ft_memmove.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c	

HEADER = libft.h

OBJECTS  = $(SRC:.c=.o)
OBJECTS_B = $(SRC_B:.c=.o)

RM = /bin/rm -rf

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)


%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(OBJECTS_B) $(HEADER)
	@ar rc $(NAME) $(OBJECTS_B)

clean :
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.Phony : all clean fclean re