NAME	=	exec

CC	=	c++

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
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