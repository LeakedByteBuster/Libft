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


SRC = 	ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_strlcpy.c \
		ft_isalpha.c	ft_isdigit.c	ft_strlcat.c	ft_strlen.c \
		ft_strncmp.c	ft_toupper.c	ft_tolower.c	ft_strnstr.c \
		ft_strchr.c		ft_strrchr.c	ft_memset.c		ft_bzero.c	 \
		ft_memchr.c		ft_memcmp.c		ft_memmove.c	ft_atoi.c	\
		ft_strdup.c		ft_substr.c		ft_strjoin.c	ft_strtrim.c	 \
		ft_itoa.c		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c \
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c  ft_split.c \
		ft_calloc.c 	ft_memcpy.c

SRC_B =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \
		ft_lstiter.c	ft_lstdelone.c		ft_lstclear.c	ft_lstmap.c	 ft_lstadd_back.c

NAME = libft.a

CFLAGS = -Werror -Wextra -Wall

HEADER = libft.h

OBJ_DIR = obj



OBJECTS = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

OBJECTS_B = $(addprefix $(OBJ_DIR)/,$(SRC_B:.c=.o))

RM = /bin/rm -rf

COLOR='\033[0;32m'
NC='\033[0m'
RE= '\033[0;34m'

all : $(NAME)
	
$(NAME) : $(OBJ_DIR) $(OBJECTS)
	printf ${RE}"\rMaking is done ✅\n"${NC}
	ar rcs $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o : %.c $(HEADER)
	@ printf "🔷 Compiling --> "${RE}$(notdir $@)"\n"${NC}
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
	mkdir obj

bonus : $(OBJECTS_B)
	printf ${RE}"\rMaking is done ✅\n"${NC}
	ar rc $(NAME) $(OBJECTS_B)

clean :
	$(RM) $(OBJ_DIR) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.Phony : all clean fclean re
.SILENT : $(OBJ_DIR) bonus $(NAME)
.DEFAULT_GOAL := all