NAME	=	exec

CXX	=	clang++

CXXFLAGS	= -Wall -Wextra -Werror

SRCS	=	span.cpp \
			main.cpp 

OBJS	=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all :		$(NAME)

clean:		
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all