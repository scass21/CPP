NAME		= abstract
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Animal.hpp Cat.hpp Dog.hpp Brain.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME) 
			@echo "\033[32mThis code is unclean. PURIFY IT!\033[0m"

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
