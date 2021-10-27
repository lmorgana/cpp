NAME			= ex03
SRCS			= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
				  RobotomyRequestForm.cpp PresidentialPardonForm.cpp \
				  Intern.cpp
OBJS			= $(patsubst %.cpp, %.o, $(SRCS))
HEADERS			= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
				  PresidentialPardonForm.hpp Intern.hpp
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