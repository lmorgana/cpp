NAME			= ex03
SRCS			= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Fixed.hpp Point.hpp
CC				= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98

.cpp.o: $(HEADERS)
	clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(FLAGS)  $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test