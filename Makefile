##
##
## Makefile created by Victor Lucas
## 
##

SRC			=		main.cpp 	\
					remover.cpp 

OBJ			=		$(SRC:.cpp=.o)

NAME		=		mid_remover.tor4

CPPFLAGS 	=		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			clean fclean all

.PHONY:		all clean fclean re