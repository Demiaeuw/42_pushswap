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
NAMECHECK = swap_push_check

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

UTILS =	srcs/utils/utils_pushswap/ft_atoi.c\
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
	srcs/utils/utils_pushswap/ft_strcmp.c\
	srcs/utils/utils_pushswap/ft_strlcpy.c\
	srcs/utils/utils_pushswap/ft_strlen.c\
	srcs/utils/utils_pushswap/get_max.c\
	srcs/utils/utils_pushswap/init_data.c\
	srcs/utils/utils_pushswap/is_sorted.c\
	srcs/utils/utils_pushswap/lf_minus_cost.c\
	srcs/utils/utils_pushswap/lf_target.c\
	srcs/utils/utils_pushswap/print_list.c\
	srcs/utils/utils_pushswap/print_noeud_liste.c

SRCSCHECK =	srcs/utils/get_next_line/get_next_line00.c\
		srcs/utils/get_next_line/get_next_line01.c\
		checker/main_check.c\
		checker/check01.c\
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
		


# Fichiers objets
OBJS = $(SRCS:.c=.o)
OBJSUTILS = $(UTILS:.c=.o)
OBJSCHECK = $(SRCSCHECK:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Règle par défaut
all: printhader printactionobj $(NAME) printend
checker: printhader printhadercheck printactionobj $(NAMECHECK) printendcheck

# Règle pour créer l'exécutable
$(NAME): $(OBJS) $(OBJSUTILS)
	@sleep 1
	@echo " "
	@echo " "
	@echo "   Compilation des \033[32mfichiers OBJET\033[0m --> ✅"
	@sleep 1
	@echo " "
	@echo " "
	@$(MAKE) -C ./srcs/utils/ft_printf
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJSUTILS) ./srcs/utils/ft_printf/ft_printf.a
	
$(NAMECHECK): $(OBJSCHECK) $(OBJSUTILS)
	@sleep 1
	@echo " "
	@echo " "
	@echo "   Compilation des \033[32mfichiers OBJET\033[0m --> ✅"
	@sleep 1
	@echo " "
	@echo " "
	@$(MAKE) -C ./srcs/utils/ft_printf
	@$(CC) $(CFLAGS) -o $(NAMECHECK) $(OBJSCHECK) $(OBJSUTILS)  ./srcs/utils/ft_printf/ft_printf.a

# Règle pour un programme propre
clear: all checker clean

# Règle pour nettoyer les fichiers objets
clean:
	@$(MAKE) clean -C ./srcs/utils/ft_printf
	@rm -f $(OBJS) $(OBJSUTILS) $(OBJSCHECK)

fclean: clean
	@$(MAKE) fclean -C ./srcs/utils/ft_printf
	@rm -f $(NAME) $(NAMECHECK)
	$(MAKE) printfclen

re: fclean all

# Règle d'affichage
printhader: 
	@sleep 1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _________________________________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_________________________________________________|\033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "                  _                                "
	@sleep 0.1
	@echo "                 | |                               "
	@sleep 0.1
	@echo "  _ __  _   _ ___| |__    _____      ____ _ _ __   "
	@sleep 0.1
	@echo " |  _ \| | | / __| |_ \  / __\ \ /\ / / _  |  _ \  "
	@sleep 0.1
	@echo " | |_) | |_| \__ \ | | | \__ \\ V  V / (_| | |_) | "
	@sleep 0.1
	@echo " |  __/ \____|___/_| |_| |___/ \_/\_/ \____|  __/  "
	@sleep 0.1
	@echo " | |                 ______                | |     "
	@sleep 0.1
	@echo " |_|                |______|               |_|     "
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _________________________________________________ "
	@sleep 0.1
	@echo "\033[94m|_________________________________________________|"
	@sleep 0.1
	@echo "\033[97m                                                   \033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 1

printhadercheck:
	@sleep 0.1
	@echo "                                     "
	@sleep 0.1
	@echo "                                     "
	@sleep 0.1
	@echo "       _               _             "
	@sleep 0.1
	@echo "      | |             | |            "
	@sleep 0.1
	@echo "   ___| |__   ___  ___| | _____ _ __ "
	@sleep 0.1
	@echo "  / __|  _ \ / _ \/ __| |/ / _ \  __|"
	@sleep 0.1
	@echo " | (__| | | |  __/ (__|   <  __/ |   "
	@sleep 0.1
	@echo "  \___|_| |_|\___|\___|_|\_\___|_|   "
	@sleep 0.1
	@echo "                                     "
	@sleep 0.1
	@echo "                                     "
	@sleep 0.1
	@echo "                                     "
	@sleep 0.5

printactionobj:
	@echo "\033[97m   Compilation des\033[0m \033[38;5;208mfichiers OBJET\033[0m --> 💻"
	@sleep 2
	@echo " "

printend:
	@echo " "
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "
	@echo "   Utilitaire : \033[94m./push_swap\033[0m est utilisable."
	@echo " "
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "

printendcheck:
	@echo " "
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "
	@echo " "
	@echo "   Utilitaire : \033[94m./swap_push_check\033[0m est utilisable."
	@echo " "
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "

printfclen:
	@sleep 1
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "
	@echo "   Tous les fichiers sont supprimé 🚮"
	@echo " "
	@echo " "
	@sleep 1
	@echo "   \033[32mMerci d'avoir utilisé\033[0m \033[94mpush_swap\033[0m"
	@echo " "
	@echo " "
	@echo "\033[94m _________________________________________________ \033[0m"
	@echo "\033[94m|_________________________________________________|\033[0m"
	@echo " "
	@echo " "
	@sleep 1