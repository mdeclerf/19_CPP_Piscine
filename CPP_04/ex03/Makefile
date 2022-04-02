NAME	=	exec

CXX	=	clang++

INCLUDE 	=	Includes
CXXFLAGS	=	-Wall -Wextra -Werror -I $(INCLUDE)

SRCS	=	Srcs/AMateria.cpp \
			Srcs/Character.cpp \
			Srcs/Ice.cpp \
			Srcs/Cure.cpp \
			Srcs/MateriaSource.cpp \
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