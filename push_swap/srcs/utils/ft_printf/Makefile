# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:47:04 by acabarba          #+#    #+#              #
#    Updated: 2023/11/07 13:37:31 by acabarba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	SRCS/ft_printf.c\
	SRCS/ft_transform.c\
	SRCS/ft_write.c\
	SRCS/ft_format.c\
	SRCS/ft_puthex.c\
	SRCS/ft_compteur.c
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I

NAME = ft_printf.a

INCLUDES = includes

.c.o: ft_printf.h
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -rc	$(NAME) $(OBJS)

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all