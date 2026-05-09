NAME = Bureaucrat

SRCS =  main.cpp  AForm.cpp  RobotomyRequestForm.cpp Bureaucrat.cpp    PresidentialPardonForm.cpp   ShrubberyCreationForm.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS =  -std=c++98

all: $(NAME)

$(NAME): $(OBJS) AForm.hpp Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re