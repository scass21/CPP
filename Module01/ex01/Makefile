NAME		= zombie_horde
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98
SRCS		= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Zombie.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)
			@echo "\033[32mZombie_horde IS READY \033[0m"

$(NAME):	$(OBJS) $(HEADER)
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re