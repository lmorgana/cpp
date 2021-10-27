NAME			= zmbHorde
SRCS			= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Zombie.hpp
CC				= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98

.cpp.o: $(HEADERS)
	clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test