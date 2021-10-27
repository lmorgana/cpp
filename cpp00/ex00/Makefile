NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJECTS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME):	$(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all