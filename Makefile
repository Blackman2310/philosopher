CC = CC
CFLAGS = -Wall -Wextra -Werror

SRCF = philo.c pars.c fncutlis.c

OBJF = $(SRCF:.c=.o)

NAME =	PHILO


all : $(NAME)

$(NAME): $(OBJF)
		$(CC) $(CFLAGS) $(OBJF) -o $(NAME)


clean:
		$(RM) $(OBJF)

fclean: clean
		$(RM) $(NAME)

re : fclean all
