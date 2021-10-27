NAME = test

CC = clang++

FLAGS = -Wall -Wextra -Werror

HEADERS = Account.hpp

SRCS = tests.cpp Account.cpp

OBJECTS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all