# Fichiers sources
SRCS = C/Sully.c

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Compilateur et options de compilation
GCC = gcc -Wall -Wextra -Werror

# Nom de l'exécutable
NAME = Sully

# Règle par défaut
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS)
	$(GCC) -o $(NAME) $(OBJS)

# Règle pour compiler les fichiers objets
.c.o:
	$(GCC) -c $< -o $@

# Règles de nettoyage
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
