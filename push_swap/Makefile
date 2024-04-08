# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 20:51:14 by acabarba          #+#    #+#              #
#    Updated: 2024/03/28 23:34:46 by acabarba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'executable
NAME = push_swap

# Fichiers source
SRCS =	main.c\
	srcs/00_error/error00.c\
	srcs/00_error/error01.c\
	srcs/00_error/free00.c\
	srcs/01_argument/argument00.c\
	srcs/01_argument/argument01.c\
	srcs/01_argument/argument02.c\
	srcs/01_argument/argument03.c\
	srcs/02_mouvement/mouvement00.c\
	srcs/02_mouvement/mouvement01.c\
	srcs/02_mouvement/mouvement02.c\
	srcs/02_mouvement/mouvement03.c\
	srcs/02_mouvement/mouvement04.c\
	srcs/03_infos/infos00.c\
	srcs/03_infos/infos01.c\
	srcs/03_infos/infos02.c\
	srcs/04_trie/trie00.c\
	srcs/04_trie/trie01.c\
	srcs/04_trie/trie02.c\
	srcs/04_trie/trie03.c\
	srcs/04_trie/trie04.c

UTILS = srcs/utils/utils_pushswap/ft_atoi.c\
	srcs/utils/utils_pushswap/ft_atol.c\
	srcs/utils/utils_pushswap/ft_lstaddfront.c\
	srcs/utils/utils_pushswap/ft_lstlast.c\
	srcs/utils/utils_pushswap/ft_lstlfbig.c\
	srcs/utils/utils_pushswap/ft_lstlflow.c\
	srcs/utils/utils_pushswap/ft_lstlfmed.c\
	srcs/utils/utils_pushswap/ft_lstnewnode.c\
	srcs/utils/utils_pushswap/ft_lstsize.c\
	srcs/utils/utils_pushswap/ft_putendl_fd.c\
	srcs/utils/utils_pushswap/ft_split.c\
	srcs/utils/utils_pushswap/ft_strlcpy.c\
	srcs/utils/utils_pushswap/ft_strlen.c\
	srcs/utils/utils_pushswap/get_max.c\
	srcs/utils/utils_pushswap/init_data.c\
	srcs/utils/utils_pushswap/is_sorted.c\
	srcs/utils/utils_pushswap/lf_minus_cost.c\
	srcs/utils/utils_pushswap/print_list.c\
	srcs/utils/utils_pushswap/print_noeud_liste.c


# Fichiers objets
OBJS = $(SRCS:.c=.o)
OBJSUTILS = $(UTILS:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Règle par défaut
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS) $(OBJSUTILS)
	$(MAKE) -C ./srcs/utils/ft_printf
	gcc $(CFLAGS) -o $(NAME) $(OBJS) $(OBJSUTILS) ./srcs/utils/ft_printf/ft_printf.a

# Règle pour nettoyer les fichiers objets
clean:
	$(MAKE) clean -C ./srcs/utils/ft_printf
	rm -f $(OBJS) $(OBJSUTILS)

fclean: clean
	$(MAKE) fclean -C ./srcs/utils/ft_printf
	rm -f $(NAME) $(OBJSUTILS)

re: fclean all