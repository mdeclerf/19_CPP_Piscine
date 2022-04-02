NAME	=	weapon

CC	=	clang++

CFLAGS	=	-Wall -Wextra -Werror -I.

SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

OBJS	=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all :		$(NAME)

clean:		
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all