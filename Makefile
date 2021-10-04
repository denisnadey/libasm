NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

HEADER = libasm.h

OBJS = $(SRCS:.s=.o)

AR = ar -rcs

CC = nasm -f macho64

RM = rm -f

TEST = main.c

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(NAME) $(OBJS)

.s.o:
	$(CC) $<

test: $(NAME) $(HEADER) $(TEST)
	@gcc $(TEST) $(NAME)
	./a.out


clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) ./a.out

re: fclean all

.PHONY: all clean fclean re
