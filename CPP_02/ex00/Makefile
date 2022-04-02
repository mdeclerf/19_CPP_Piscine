NAME	=	fixed_point_value

CC	=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Fixed.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all :		$(NAME)

clean:		
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all