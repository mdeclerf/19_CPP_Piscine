NAME	=	exec

CXX	=	clang++

INCLUDE 	=	Includes
CXXFLAGS	=	-Wall -Wextra -Werror -I $(INCLUDE)

SRCS	=	Srcs/Bureaucrat.cpp \
			Srcs/Form.cpp \
			Srcs/RobotomyRequestForm.cpp \
			Srcs/ShrubberyCreationForm.cpp \
			Srcs/PresidentialPardonForm.cpp \
			Srcs/Intern.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all :		$(NAME)

clean:		
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all