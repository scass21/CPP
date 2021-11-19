NAME		= intern
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -I. -std=c++98 -g
SRCS		= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

%.o:		%.cpp $(HEADER)
			$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)
			
all:		$(NAME) 
			@echo "\033[32mAt least this beats coffee-making\033[0m"

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS) *_shrubbery

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
