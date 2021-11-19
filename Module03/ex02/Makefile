NAME		= fragtrap
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)
			@echo "\033[32m Repetitive work \033[0m"

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re