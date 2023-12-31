# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hienguye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:57:06 by hienguye          #+#    #+#              #
#    Updated: 2023/11/29 10:57:10 by hienguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

CFLAGS 	= 	-Wall -Werror -Wextra

CC		= 	cc

RM 		= 	rm -f

SRC 	= 	ft_atoi.c ft_bzero.c				\
			ft_calloc.c ft_isalnum.c			\
			ft_isalpha.c ft_isascii.c			\
			ft_isdigit.c ft_isprint.c			\
			ft_itoa.c ft_memchr.c				\
			ft_memcmp.c ft_memcpy.c				\
			ft_memmove.c ft_memset.c			\
			ft_putchar_fd.c ft_putendl_fd.c		\
			ft_putnbr_fd.c ft_putstr_fd.c		\
			ft_strchr.c ft_striteri.c			\
			ft_strjoin.c ft_strlcat.c			\
			ft_strlcpy.c ft_strlen.c			\
			ft_strncmp.c ft_strmapi.c			\
			ft_strnstr.c ft_strrchr.c			\
			ft_strtrim.c ft_substr.c			\
			ft_tolower.c ft_toupper.c			\
			ft_strdup.c	ft_split.c				\

OBJS 	= 	$(SRC:.c=.o)

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c	\
			ft_lstclear.c ft_lstdelone.c		\
			ft_lstiter.c ft_lstlast.c			\
			ft_lstmap.c ft_lstnew.c ft_lstsize.c	\

BONUS_OBJS	= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
		@$(CC) $(FLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:
		@$(RM) $(NAME) $(OBJS) $(BONUS_OBJS)

re:		fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re, bonus