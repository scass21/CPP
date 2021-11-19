NAME		= main
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
%.o:		%.cpp
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME) 
			@echo "\033[32m"HI THIS IS BRAIN"\033[0m"

$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re