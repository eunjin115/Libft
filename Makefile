# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 14:37:42 by eunjikim          #+#    #+#              #
#    Updated: 2020/12/30 11:47:54 by eunjikim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strdup.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c ft_toupper.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c 
SRCS_B	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS_B	= $(SRCS_B:.c=.o)
OBJS	= $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror -I .

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(OBJS_B)
	ar crs $(NAME) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)

re: fclean all

.PHONY: all bonus clean fclean re .c.o
