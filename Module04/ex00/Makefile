NAME		= animals
CXX			= clang++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
%.o:		%.cpp $(HEADER)
			$(CXX) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME) 
			@echo "\033[32m Polymorphism! \033[0m"

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
