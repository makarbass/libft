# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatrici <bpatrici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 11:22:55 by bpatrici          #+#    #+#              #
#    Updated: 2022/01/25 16:48:00 by bpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

OBJ_DIR		=	./.obj

HEADER_FILE =	libft.h

SRC			=	ft_strlen.c ft_strlcat.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
				ft_isprint.c ft_isascii.c ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strdup.c \
				ft_atoi.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
				ft_memcmp.c ft_memccpy.c ft_memchr.c ft_memmove.c ft_calloc.c \
				ft_strjoin.c ft_itoa.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_substr.c ft_strtrim.c ft_putendl_fd.c ft_strmapi.c ft_split.c ft_striteri.c\

SRC_B		=	ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstiter.c \
				ft_lstlast.c ft_lstsize.c ft_lstdelone.c ft_lstmap.c

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(SRC_B:.c=.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra
CRTLB = ar rc
 
NAME = libft.a

all: $(NAME)

%.o: %.c $(HEADER_FILE)
	$(CC) $(FLAGS) -c $< -o $@
	
$(NAME):	$(OBJS) $(HEADER_FILE)
	$(CRTLB) $(NAME) $(OBJS)

bonus:	$(BONUS_OBJS) $(HEADER_FILE)
	$(CRTLB) $(NAME) $(BONUS_OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re
