CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	   ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memset.c \
	   ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c \
	   ft_striteri.c ft_memchr.c ft_split.c ft_itoa.c
SRCSB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
NAME = libft.a 
LIBC = ar rcs
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
#c.o:: Questo è l'obiettivo della regola. Specifica che la
#		regola serve a creare un file con estensione .o da un file sorgente con estensione .c.

#-c $<: Questa parte del comando dice al compilatore di generare un file oggetto (-c flag)
# 	   dal file sorgente specificato da $<.

#-o ${<:.c=.o}: Questa parte specifica il nome del file di output. ${<:.c=.o} è un'espressione
#				nel makefile che prende il nome del file sorgente ($<), sostituisce l'estensione .c con .o e 
#				lo imposta come nome del file di output.

${NAME}: ${OBJS}
	${LIBC}	${NAME}	${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

clean:
	${RM}	${OBJS}	${OBJSB}

fclean: clean
	${RM}	${NAME}	${bonus}

re: fclean	all

.PHONY:	all	clean	bonus	fclean	re