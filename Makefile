##
##
## Makefile created by Victor Lucas
## 
##

CC			=		g++ -o

RM 			=		rm -f

SRC			=		main.cpp 	\
					remover.cpp 

OBJ			=		$(SRC:.cpp=.o)

NAME		=		mid_remover

CPPFLAGS 	=		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(NAME) $(OBJ) $(CPPFLAGS)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			clean fclean all

.PHONY:		all clean fclean re