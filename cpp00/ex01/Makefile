NAME = phonebook

CC = clang++

FLAGS = -Wall -Wextra -Werror

HEADERS = phonebook.h contact.hpp

SRCS = phonebook.cpp contact.cpp main.cpp

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