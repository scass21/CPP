NAME		= easyfind
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= easyfind.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)
			
all:		$(NAME) 
			@echo "\033[32mEasy find\033[0m"

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
