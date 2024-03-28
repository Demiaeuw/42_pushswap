# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 00:17:41 by acabarba          #+#    #+#              #
#    Updated: 2024/03/20 00:17:41 by acabarba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'executable
NAME = push_swap

# Fichiers source
SRCS =	main.c\
	srcs/create_list/argument_split.c\
	srcs/create_list/check_int.c\
	srcs/create_list/create_list.c\
	srcs/error/error01.c\
	srcs/error/error02.c\
	srcs/error/free.c\
	srcs/mouvement/push.c\
	srcs/mouvement/reverse_rotate.c\
	srcs/mouvement/rotate.c\
	srcs/mouvement/swap.c\
	srcs/specifique_trie/check_trie.c\
	srcs/specifique_trie/specifique_all.c\
	srcs/specifique_trie/un_et_deux_et_trois.c\
	srcs/step_by_step/step001.c\
	srcs/step_by_step/step002.c\
	srcs/trie/target_mouve.c\
	srcs/trie/target_trie.c\
	srcs/trie/trie01.c\
	srcs/utils/ft_atoi.c\
	srcs/utils/ft_atol.c\
	srcs/utils/ft_lstlast.c\
	srcs/utils/ft_lstsize.c\
	srcs/utils/ft_putendl_fd.c\
	srcs/utils/ft_split.c\
	srcs/utils/ft_strlcpy.c\
	srcs/utils/ft_strlen.c


# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Règle par défaut
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS)
	$(MAKE) -C ./srcs/utils/ft_printf
	gcc $(CFLAGS) -o $(NAME) $(OBJS) ./srcs/utils/ft_printf/ft_printf.a

# Règle pour nettoyer les fichiers objets
clean:
	$(MAKE) clean -C ./srcs/utils/ft_printf
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./srcs/utils/ft_printf
	rm -f $(NAME)

re: fclean all
