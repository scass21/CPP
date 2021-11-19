NAME		= Unnecessary_violence
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Weapon.hpp HumanB.hpp HumanA.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)
			@echo "\033[32mUnnecessary violence\033[0m"

$(NAME):	$(OBJS) $(HEADER)
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re