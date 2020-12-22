# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 14:37:42 by eunjikim          #+#    #+#              #
#    Updated: 2020/12/22 18:40:05 by eunjikim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
SOURCES =	ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c\
			

			
OBJECTS = $(SOURCES:.c=.o)
INCDIR = .
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCDIR)
	
$(TARGET): $(OBJECTS)
	ar -crs $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re .c.o