NAME			= ex02
SRCS			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS			= $(patsubst %.cpp, %.o, $(SRCS))
HEADERS			= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CC				= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(HEADERS) $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re